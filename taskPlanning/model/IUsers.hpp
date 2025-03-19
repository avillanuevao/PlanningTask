#pragma once

#include <string>

#include <utils/Publisher.hpp>
#include <model/signal/AddedUser.hpp>

namespace model {

class IUsers : public utils::Publisher<model::signal::AddedUser>
{
public:
    IUsers() = default;

    virtual void addUser(std::string nameUser) = 0;
};

} // namespace model
