#include "ShowFamilyUnit.hpp"

namespace view {

ShowFamilyUnit::ShowFamilyUnit(QObject *parent)
    : QObject(parent)
{
    std::cout << "aaaaaa" << std::endl;
    loadFamiliesUnits();
}

QStringList ShowFamilyUnit::getFamiliesUnits() const
{
    std::cout << "aaaaaa" << std::endl;

    return mNameFamiliesUnits;
}

void ShowFamilyUnit::loadFamiliesUnits()
{
    std::vector<std::string> familiesUnits;
    familiesUnits.push_back("Familia A");
    familiesUnits.push_back("Familia B");
    familiesUnits.push_back("Familia C");

    for (const auto &str : familiesUnits) {
        mNameFamiliesUnits.append(QString::fromStdString(str));
    }

    emit familiesUnitsChanged();
}

} // namespace view
