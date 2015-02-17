/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <fw/window.h>

namespace backend
{
    template<typename T>
    WindowHandle createWindow(const unsigned width, const unsigned height, const char *title,
                              fw_color_mode mode);

    void makeWindowCurrent(const WindowHandle window);

    void destroyWindow(const WindowHandle window);
}
