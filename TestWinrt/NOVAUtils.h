#pragma once
#include "NOVAUtils.g.h"


namespace winrt::TestWinrt::implementation
{
    struct NOVAUtils : NOVAUtilsT<NOVAUtils>
    {
        NOVAUtils() = default;

        static Windows::Foundation::IAsyncOperation<hstring> CurrentLoginAsync();
    };
}
namespace winrt::TestWinrt::factory_implementation
{
    struct NOVAUtils : NOVAUtilsT<NOVAUtils, implementation::NOVAUtils>
    {
    };
}
