// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <memory>
#include "core/hle/service/service.h"

namespace Service {
namespace VI {

class VI_S final : public ServiceFramework<VI_S> {
public:
  VI_S();
  ~VI_S() = default;

private:
  void GetDisplayService(Kernel::HLERequestContext &ctx);

  std::shared_ptr<NVFlinger> nv_flinger;
};

} // namespace VI
} // namespace Service
#pragma once
