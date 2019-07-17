#pragma once

#include "MainPage.g.h"

namespace winrt::TestWinrt::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

		Windows::Foundation::IAsyncAction ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::TestWinrt::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
