#include "user.hpp"

namespace api {
namespace v1 {
/*
 User {
  int userId;
  string name;
  string info;
  string detailed_info;
 }
*/

void User::getInfo(const HttpRequestPtr& req,
                   std::function<void(const HttpResponsePtr&)>&& callback,
                   int userId) const {
  auto resp = HttpResponse::newHttpResponse();
  resp->setBody("user info for id: " + std::to_string(userId));
  resp->setExpiredTime(0);
  callback(resp);
}

void User::getDetailInfo(const HttpRequestPtr& req,
                         std::function<void(const HttpResponsePtr&)>&& callback,
                         int userId) const {
  auto resp = HttpResponse::newHttpResponse();
  resp->setBody("detailed user info for id: " + std::to_string(userId));
  resp->setExpiredTime(0);
  callback(resp);
}

void User::newUser(const HttpRequestPtr& req,
                   std::function<void(const HttpResponsePtr&)>&& callback,
                   std::string&& userName) {
  auto resp = HttpResponse::newHttpResponse();
  resp->setBody("newUser: " + userName);
  resp->setExpiredTime(0);
  callback(resp);
}
} // namespace v1
} // namespace api
