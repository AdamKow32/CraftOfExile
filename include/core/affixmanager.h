#ifndef AFFIXMANAGER_H
#define AFFIXMANAGER_H
#include <map>
#include <vector>
#include <string>
#include "affix.h"
#include "enums.h"

namespace core{
struct TierData{
    int tier;
    int min;
    int max;
};

struct AffixDefinition{
    std::string name;
    AffixType type;
    std::vector<TierData> tiers;
};

struct AffixPool{
    std::vector<AffixDefinition> prefixes;
    std::vector<AffixDefinition> suffixes;
};

class AffixManager{
    public:
      void loadFromFile(const std::string& path);
      Affix generateRandomAffix(ItemType type, AffixType affixType);
};
}
#endif //AFFIXMANAGER_H
