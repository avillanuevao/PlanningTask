#pragma once

#include <memory>

#include <controller/operation/ISelectTask.hpp>
#include <model/IFamiliesUnits.hpp>

namespace controller {
namespace operation {

class SelectTask : public controller::operation::ISelectTask
{
public:
    SelectTask(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits);

    void selectTask(std::string nameTask) override;

private:
    std::shared_ptr<model::IFamiliesUnits> mModelFamiliesUnits;
};

} // namespace operation
} // namespace controller
