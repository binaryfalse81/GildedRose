#include "GildedRose.h"

GildedRose::GildedRose(vector<Item>& items) : items(items)
{}

void GildedRose::updateQuality()
{
    for (int i = 0; i < items.size(); i++)
    {
        if (items[i].name == ITEM::AGED_BRIE)
        {
            updateQualityForAgedBrie(i);
        }
        else if (items[i].name == ITEM::BACKSTAGE_PASS)
        {
            updateQualityForBackstagePasses(i);
        }
        else if (items[i].name == ITEM::SULFURAS)
        {
            updateQualityForSulfuras(i);
        }
        else
        {
            updateQualityForNormalItem(i);
        }
    }
}

void GildedRose::updateQualityForAgedBrie(int i)
{
    increaseQuality(i);

    if (items[i].sellIn < 0)
    {
        increaseQuality(i);
    }
}

void GildedRose::updateQualityForBackstagePasses(int i)
{
    increaseQuality(i);

    if (items[i].sellIn < 11)
    {
        increaseQuality(i);

        if (items[i].sellIn < 6)
        {
            increaseQuality(i);

            if (items[i].sellIn < 0)
            {
                items[i].quality = 0;
            }
        }
    }
}

void GildedRose::updateQualityForSulfuras(int i)
{
    // nothing...
}

void GildedRose::updateQualityForNormalItem(int i)
{
    decreaseQuality(i);
    items[i].sellIn = items[i].sellIn - 1;

    if (items[i].sellIn < 0)
    {
        decreaseQuality(i);
    }
}

void GildedRose::increaseQuality(int i)
{
    if (items[i].quality < MAX_QUALITY)
    {
        items[i].quality++;
    }
}

void GildedRose::decreaseQuality(int i)
{
    if (items[i].quality > 0)
    {
        items[i].quality--;
    }
}