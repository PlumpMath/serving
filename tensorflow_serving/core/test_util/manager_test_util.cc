/* Copyright 2016 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow_serving/core/test_util/manager_test_util.h"

namespace tensorflow {
namespace serving {
namespace test_util {

AspiredVersionsManagerTestAccess::AspiredVersionsManagerTestAccess(
    AspiredVersionsManager* manager)
    : manager_(manager) {}

void AspiredVersionsManagerTestAccess::RunManageState() {
  manager_->ManageState();
}

CachingManagerTestAccess::CachingManagerTestAccess(CachingManager* manager)
    : manager_(manager) {}

int64 CachingManagerTestAccess::GetLoadMutexMapSize() const {
  return manager_->GetLoadMutexMapSize();
}

}  // namespace test_util
}  // namespace serving
}  // namespace tensorflow