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
  LOG_DEBUG << "userId: " << userId;

  auto resp = HttpResponse::newHttpResponse();
  resp->setBody("user info for id: " + std::to_string(userId));
  callback(resp);
}

void User::getDetailInfo(const HttpRequestPtr& req,
                         std::function<void(const HttpResponsePtr&)>&& callback,
                         int userId) const {
  LOG_DEBUG << "userId: " << userId;

  auto resp = HttpResponse::newHttpResponse();
  resp->setBody("detailed user info for id: " + std::to_string(userId));
  callback(resp);
}

void User::newUser(const HttpRequestPtr& req,
                   std::function<void(const HttpResponsePtr&)>&& callback,
                   std::string&& userName) {
  LOG_DEBUG << "userId: " << userName;

  auto resp = HttpResponse::newHttpResponse();
  resp->setBody("newUser: " + userName);
  callback(resp);
}
} // namespace v1
} // namespace api
