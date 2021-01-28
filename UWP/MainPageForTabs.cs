using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.ApplicationModel.Core;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;
using MUXC = Microsoft.UI.Xaml.Controls;
using Microsoft.UI;
using Microsoft.UI.Xaml.Controls;
using Microsoft.Graphics.Canvas;
using Windows.Storage;
using DocumentFormat.OpenXml.InkML;
using Microsoft.Graphics.Canvas.UI.Composition;
using Windows.UI.Xaml.Hosting;
using System.Drawing;
using System.Drawing.Imaging;





// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace Crypto_Trader
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
            var coreTitleBar = CoreApplication.GetCurrentView().TitleBar;
            coreTitleBar.ExtendViewIntoTitleBar = true;
            coreTitleBar.LayoutMetricsChanged += CoreTitleBar_LayoutMetricsChanged;
            // Set XAML element as a draggable region.
            Window.Current.SetTitleBar(AppTitleBar);

        }
        private void CoreTitleBar_LayoutMetricsChanged(CoreApplicationViewTitleBar sender, object args)
        {
            AppTitleBar.Height = sender.Height;
        }

        private void Binance_Loaded(object sender, RoutedEventArgs e)
        {
            webviewBinance.Navigate(new Uri("https://www.binance.com/tr/trade/BTC_USDT?layout=pro"));
            var currentTab = TabView.SelectedItem as TabViewItem;
            currentTab.Header = "Binance";
        }

        private void BTCTurk_Loaded(object sender, RoutedEventArgs e)
        {
            webviewBTCTurk.Navigate(new Uri("https://pro.btcturk.com/pro/al-sat/BTC_TRY"));
            var currentTab = TabView.SelectedItem as TabViewItem;
            currentTab.Header = "BTCTurk";
        }

        private void TRBinance_Loaded(object sender, RoutedEventArgs e)
        {
            webviewTRBinance.Navigate(new Uri("https://www.trbinance.com/trade/BTC_USDT"));
            var currentTab = TabView.SelectedItem as TabViewItem;
            currentTab.Header = "TRBinance";
        }

        private void Coinbase_Loaded(object sender, RoutedEventArgs e)
        {
            webviewCoinbase.Navigate(new Uri("https://www.coinbase.com/"));
            var currentTab = TabView.SelectedItem as TabViewItem;
            currentTab.Header = "Coinbase";
        }

        private void Bitfinex_Loaded(object sender, RoutedEventArgs e)
        {
            webview1Bitfinex.Navigate(new Uri("https://trading.bitfinex.com/t/ETH:USD"));
            var currentTab = TabView.SelectedItem as TabViewItem;
            currentTab.Header = "Bitfinex";
        }

        private void Bitstamp_Loaded(object sender, RoutedEventArgs e)
        {
            webviewBitstamp.Navigate(new Uri("https://www.bitstamp.net/markets/"));
            var currentTab = TabView.SelectedItem as TabViewItem;
            currentTab.Header = "Bitstamp";
        }

        private void Kraken_Loaded(object sender, RoutedEventArgs e)
        {
            webviewKraken.Navigate(new Uri("https://www.kraken.com/prices?quote=USD"));
            var currentTab = TabView.SelectedItem as TabViewItem;
            currentTab.Header = "Kraken";
        }

        
        //-----------------------Menu 1--------------------------------
        private void TabView_TabCloseRequested(MUXC.TabView sender, MUXC.TabViewTabCloseRequestedEventArgs args)
        {

        }

        private void navigationView_BackRequested(MUXC.NavigationView sender, MUXC.NavigationViewBackRequestedEventArgs args)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                if (webView.CanGoBack)
                {
                    webView.GoBack();
                }
            }

        }

        private void refreshItem_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                
                    webView.Refresh();
                
            }
        }

        private void forwardItem_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                if (webView.CanGoForward)
                {
                    webView.GoForward();
                }
            }
        }

        private void tradingViewItem_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://tr.tradingview.com/chart/"));
                currentTab.Header = "TradingView";
            }
        }
        //---------------------Menu 2-----------------------
        private void binanceItem_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://www.binance.com/tr/trade/BTC_USDT?layout=pro"));
                currentTab.Header = "Binance";
            }
        }

        private void btcTurkItem_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://pro.btcturk.com/pro/al-sat/BTC_TRY"));
                currentTab.Header = "BTCTurk";
            }
        }

        private void trbinanceItem_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://www.trbinance.com/trade/BTC_USDT"));
                currentTab.Header = "TRBinance";
            }
        }

        private void CoinbaseItem_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://www.coinbase.com/"));
                currentTab.Header = "Coinbase";
            }
        }

        private void bitfinexItem_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://trading.bitfinex.com/t/ETH:USD"));
                currentTab.Header = "Bitfinex";
            }
        }

        private void BitstampItem_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://www.bitstamp.net/markets/"));
                currentTab.Header = "Bitstamp";
            }
        }

        private void KrakenItem_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://www.kraken.com/prices?quote=USD"));
                currentTab.Header = "Kraken";
            }
        }

        private void news1_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://coinmarketcap.com/"));
                currentTab.Header = "CoinMarketCap";
            }
        }

        private void news2_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://www.coindesk.com/"));
                currentTab.Header = "Coindesk";
            }
        }

        private void news3_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://cointelegraph.com/y"));
                currentTab.Header = "CoinTelegraph";
            }
        }

        private void news4_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://twitter.com/search?q=%23cryptocurrency"));
                currentTab.Header = "Twitter";
            }
        }

        private void news5_Tapped(object sender, TappedRoutedEventArgs e)
        {
            var currentTab = TabView.SelectedItem as TabViewItem;
            if (currentTab != null)
            {
                var webView = currentTab.Content as WebView;
                webView.Navigate(new Uri("https://www.google.com"));
                currentTab.Header = "Google";
            }
        }

        
    }
}
