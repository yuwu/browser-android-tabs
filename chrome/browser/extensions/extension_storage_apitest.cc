// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "build/build_config.h"
#include "chrome/browser/extensions/extension_apitest.h"

#if defined(OS_WIN)
// Always fails on Windows after r110181: http://crbug.com/104419.
#define MAYBE_Storage DISABLED_Storage
#else
#define MAYBE_Storage Storage
#endif
IN_PROC_BROWSER_TEST_F(ExtensionApiTest, MAYBE_Storage) {
  ASSERT_TRUE(RunExtensionTest("storage")) << message_;
}
