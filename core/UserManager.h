#pragma once
#include "Models.h"
#include <string>
#include <unordered_map>
#include <vector>

class UserManager
{
private:
  std::unordered_map<std::string, User> userMap;

public:
  bool addUser(const User &user);
  bool modifyUser(const std::string &idNumber, const std::string &newName,
                  const std::string &newMobile);
  bool deleteUser(const std::string &idNumber);

  // 按身份证号查找用户，返回指向哈希表内部节点的只读指针，未找到则返回 nullptr
  const User *findUser(const std::string &idNumber);

  // 获取全部用户信息并按身份证号升序排序，先从哈希表内部全部取出，再使用快速排序
  std::vector<User> getAllUsersSorted() const;

  size_t count() const { return userMap.size(); }
};