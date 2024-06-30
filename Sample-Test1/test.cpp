#include "pch.h"
#include "../Project1/GildedRose.cpp"

TEST(GildedRoseTest, ITEM_F_001)
{
    vector<Item> items;
    items.push_back(Item("Foo", 0, 2));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ("Foo", app.items[0].name);
}

TEST(GildedRoseTest, ITEM_B_001)
{
    vector<Item> items;
    items.push_back({ ITEM::BACKSTAGE_PASS, 5, 20 });
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(ITEM::BACKSTAGE_PASS, app.items[0].name);
}

TEST(GildedRoseTest, ITEM_B_002)
{
    vector<Item> items;
    items.push_back({ ITEM::BACKSTAGE_PASS, -1, 2 });
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(ITEM::BACKSTAGE_PASS, app.items[0].name);
}

TEST(GildedRoseTest, ITEM_A_001)
{
    vector<Item> items;
    items.push_back({ ITEM::AGED_BRIE, -1, 2 });
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(ITEM::AGED_BRIE, app.items[0].name);
}

TEST(GildedRoseTest, ITEM_A_002)
{
    vector<Item> items;
    items.push_back({ ITEM::AGED_BRIE, -1, 2 });
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(ITEM::AGED_BRIE, app.items[0].name);
}

TEST(GildedRoseTest, ITEM_S_001)
{
    vector<Item> items;
    items.push_back({ ITEM::SULFURAS, -1, 2 });
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(ITEM::SULFURAS, app.items[0].name);
}