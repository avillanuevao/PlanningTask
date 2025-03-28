#pragma once

#include <utils/Subscriber.hpp>
#include <utils/Publisher.hpp>
#include <model/signal/AddedFamilyUnit.hpp>
#include <controller/visualization/signal/AddedFamilyUnit.hpp>

namespace controller {
namespace visualization {

class IShowFamilyUnit : public utils::Subscriber<model::signal::AddedFamilyUnit>, public utils::Publisher<controller::visualization::signal::AddedFamilyUnit>
{
public:
    IShowFamilyUnit() = default;
    virtual void update(const model::signal::AddedFamilyUnit& data) = 0;
};

} // namespace controller
} // namespace visualization

