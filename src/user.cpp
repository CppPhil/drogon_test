#include "user.hpp"

namespace api {
namespace v1 {
void User::getInfo(const HttpRequestPtr& req,
                   std::function<void(const HttpResponsePtr&)>&& callback,
                   int userId) const {
}

void User::getDetailInfo(const HttpRequestPtr& req,
                         std::function<void(const HttpResponsePtr&)>&& callback,
                         int userId) const {
}

void USer::newUser(const HttpRequestPtr& req,
                   std::function<void(const HttpResponsePtr&)>&& callback,
                   std::string&& userName) {
}

} // namespace v1
} // namespace api
