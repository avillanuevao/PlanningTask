#include "ModelContext.hpp"

namespace model {

ModelContext::ModelContext() {
    initModels();
}

void ModelContext::initModels()
{
    mModelFamiliesUnits = std::make_shared<model::FamiliesUnits>();
}

std::shared_ptr<model::FamiliesUnits> ModelContext::getModelFamiliesUnits() const
{
    return mModelFamiliesUnits;
}

} // namespace model
