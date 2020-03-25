#include <drogon/drogon.h>

#include "user.hpp"

using namespace drogon;

int main() {
  app().addListener("127.0.0.1", 8848);
  app().setDocumentRoot("./");
  app().enableSession(60);

  auto ctrlPtr = std::make_shared<api::v1::User>();

  app().registerController(ctrlPtr);
  app().run();
}
