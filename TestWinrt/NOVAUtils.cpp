#include "pch.h"
#include "NOVAUtils.h"
#include "NOVAUtils.g.cpp"


namespace winrt::TestWinrt::implementation
{
    Windows::Foundation::IAsyncOperation<hstring> NOVAUtils::CurrentLoginAsync()
    {
		co_await resume_background();
		co_return L"123";
    }
}
