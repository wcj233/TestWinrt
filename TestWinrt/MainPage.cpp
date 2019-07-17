#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::Foundation;

namespace winrt::TestWinrt::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

	IAsyncAction MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
		winrt::apartment_context ui_thread; // Capture calling context.
		co_await winrt::resume_background();
		co_await ui_thread;

		auto login = co_await NOVAUtils::CurrentLoginAsync();
		myButton().Content(box_value(login));
    }
}
