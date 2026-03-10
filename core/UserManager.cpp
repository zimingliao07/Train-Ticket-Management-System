#include "UserManager.h"
#include <algorithm>

bool UserManager::addUser(const User &user)
{
    auto it = userMap.find(user.idNumber);
    if (it != userMap.end())
        return false;
    userMap[user.idNumber] = user;
    return true;
}

bool UserManager::modifyUser(const std::string &idNumber,
                             const std::string &newName,
                             const std::string &newMobile)
{
    auto it = userMap.find(idNumber);
    if (it == userMap.end())
        return false;
    it->second.name = newName;
    it->second.mobile = newMobile;
    return true;
}

bool UserManager::deleteUser(const std::string &idNumber)
{
    auto it = userMap.find(idNumber);
    if (it == userMap.end())
        return false;
    userMap.erase(it);
    return true;
}

const User *UserManager::findUser(const std::string &idNumber)
{
    auto it = userMap.find(idNumber);
    if (it != userMap.end())
        return &(it->second);
    return nullptr;
}

std::vector<User> UserManager::getAllUsersSorted() const
{
    std::vector<User> userList;
    for (const auto &pair : userMap)
        userList.push_back(pair.second);
    std::sort(
        userList.begin(), userList.end(),
        [](const User &a, const User &b)
        { return a.idNumber < b.idNumber; });
    return userList;
}