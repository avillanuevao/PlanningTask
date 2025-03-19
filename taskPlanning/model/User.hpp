#pragma once

#include <string>

#include <model/IUser.hpp>

namespace model {

class User : public model::IUser
{
public:
    User(std::string name);

private:
    std::string mName;
};

} // namespace model

