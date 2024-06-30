#include <string>
#include <vector>

using namespace std;

const int MAX_QUALITY = 50;

namespace ITEM
{
    const string SULFURAS = "Sulfuras, Hand of Ragnaros";
    const string AGED_BRIE = "Aged Brie";
    const string BACKSTAGE_PASS = "Backstage passes to a TAFKAL80ETC concert";
}

class Item
{
public:
    string name;
    int sellIn;
    int quality;
    Item(string name, int sellIn, int quality) : name(name), sellIn(sellIn), quality(quality)
    {}
};

class GildedRose
{
public:
    vector<Item>& items;
    GildedRose(vector<Item>& items);
    void updateQuality();
    void updateQualityForAgedBrie(int i);
    void updateQualityForBackstagePasses(int i);
    void updateQualityForSulfuras(int i);
    void updateQualityForNormalItem(int i);
    void increaseQuality(int i);
    void decreaseQuality(int i);
};
