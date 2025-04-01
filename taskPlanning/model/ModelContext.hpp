#pragma once

#include <model/FamiliesUnits.hpp>
#include <model/Users.hpp>
#include <model/Tasks.hpp>

namespace model {

class ModelContext
{
public:
    ModelContext();

    std::shared_ptr<model::FamiliesUnits> getModelFamiliesUnits() const;

private:
    void initModels();

    std::shared_ptr<model::FamiliesUnits> mModelFamiliesUnits;
};

} // namespace model
