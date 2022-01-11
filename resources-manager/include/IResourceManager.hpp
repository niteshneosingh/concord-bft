// Concord
//
// Copyright (c) 2018-2021 VMware, Inc. All Rights Reserved.
//
// This product is licensed to you under the Apache 2.0 license (the "License").
// You may not use this product except in compliance with the Apache 2.0 License.
//
// This product may include a number of subcomponents with separate copyright
// notices and license terms. Your use of these subcomponents is subject to the
// terms and conditions of the subcomponent's license, as noted in the LICENSE
// file.

#pragma once

#include <cstdint>

namespace concord::performance {
class IResourceManager {
 public:
  virtual ~IResourceManager() = default;
  /*
    getAvailableResources indicates what capacity is left for pruning. Return value is a
  */
  virtual uint64_t getPruneBlocksPerSecond() const = 0;
};

}  // namespace concord::performance