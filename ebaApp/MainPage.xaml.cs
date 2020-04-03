using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.Storage;
using Windows.UI.Input.Inking;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;


// Boş Sayfa öğe şablonu https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x41f adresinde açıklanmaktadır

namespace eba.gov.tr
{
    /// <summary>
    /// Kendi başına kullanılabilecek ya da bir Çerçeve içine taşınabilecek boş bir sayfa.
    /// </summary>
    /// 
 

    public sealed partial class MainPage : Page
    {
        private string Text;

        public MainPage()
        {
            this.InitializeComponent();



            webBrowser1.Navigate(new Uri("https://giris.eba.gov.tr/EBA_GIRIS/student.jsp"));

            webBrowser2.Navigate(new Uri("https://www.google.com/"));
            webBrowser3.Navigate(new Uri("https://www.autodraw.com/"));
            webBrowser4.Navigate(new Uri("http://bc.vc/RMzjHdl"));
            webBrowserCalc.Navigate(new Uri("https://www.desmos.com/scientific"));

           /* inkCanvas.InkPresenter.InputDeviceTypes =
       Windows.UI.Core.CoreInputDeviceTypes.Mouse |
       Windows.UI.Core.CoreInputDeviceTypes.Pen;

            // Set initial ink stroke attributes.
            InkDrawingAttributes drawingAttributes = new InkDrawingAttributes();
            drawingAttributes.Color = Windows.UI.Colors.Black;
            drawingAttributes.IgnorePressure = false;
            drawingAttributes.FitToCurve = true;
            inkCanvas.InkPresenter.UpdateDefaultDrawingAttributes(drawingAttributes); */

        }

        private void back1_Click(object sender, RoutedEventArgs e)
        {
            if (this.webBrowser1.CanGoBack)
            {
                this.webBrowser1.GoBack();
            }
        }

        private void refresh1_Click(object sender, RoutedEventArgs e)
        {
            webBrowser1.Refresh();
        }

        private void forward1_Click(object sender, RoutedEventArgs e)
        {
            if (this.webBrowser1.CanGoForward)
            {
                this.webBrowser1.GoForward();
            }
        }

        private void home1_Click(object sender, RoutedEventArgs e)
        {
            webBrowser1.Navigate(new Uri("https://giris.eba.gov.tr/EBA_GIRIS/student.jsp"));

        }

        private void back3_Click(object sender, RoutedEventArgs e)
        {
            if (this.webBrowser2.CanGoBack)
            {
                this.webBrowser2.GoBack();
            }
        }

        private void forward3_Click(object sender, RoutedEventArgs e)
        {
            if (this.webBrowser2.CanGoForward)
            {
                this.webBrowser2.GoForward();
            }
        }

        private void refresh3_Click(object sender, RoutedEventArgs e)
        {
            webBrowser2.Refresh();
        }

        private void home3_Click(object sender, RoutedEventArgs e)
        {
            webBrowser2.Navigate(new Uri("https://www.google.com/"));
        }

        private void ilk_Click(object sender, RoutedEventArgs e)
        {
            webBrowserTV.Navigate(new Uri("https://www.trtizle.com/canli/tv/trt-eba-tv-ilkokul"));
        }

        private void orta_Click(object sender, RoutedEventArgs e)
        {
            webBrowserTV.Navigate(new Uri("https://www.trtizle.com/canli/tv/trt-eba-tv-ortaokul"));
        }

       


        private void backC_Click(object sender, RoutedEventArgs e)
        {
            if (this.webBrowserCalc.CanGoBack)
            {
                this.webBrowserCalc.GoBack();
            }
        }

        private void refreshC_Click(object sender, RoutedEventArgs e)
        {
            webBrowserCalc.Refresh();
        }

        private void forwardC_Click(object sender, RoutedEventArgs e)
        {
            if (this.webBrowserCalc.CanGoForward)
            {
                this.webBrowserCalc.GoForward();
            }
        }

        private void lise_Click(object sender, RoutedEventArgs e)
        {
            webBrowserTV.Navigate(new Uri("https://www.trtizle.com/canli/tv/trt-eba-tv-lise"));
        }

        private void bc_Click(object sender, RoutedEventArgs e)
        {
            webBrowserTV.Navigate(new Uri("http://bc.vc/RMzjHdl"));
        }

        private void homeC_Click(object sender, RoutedEventArgs e)
        {
            webBrowserCalc.Navigate(new Uri("https://www.desmos.com/scientific"));
        }

        private async void textBox1_Loaded(object sender, RoutedEventArgs e)
        {
            if (ApplicationData.Current.LocalSettings.Values.ContainsKey("text"))
            {
                StorageFile file = await ApplicationData.Current.LocalFolder.GetFileAsync("text.txt");
                textBox1.Text = await FileIO.ReadTextAsync(file);
            }
        }

       

        private async void appBarButton_Click(object sender, RoutedEventArgs e)
        {
            StorageFile file = await ApplicationData.Current.LocalFolder.CreateFileAsync("text.txt", CreationCollisionOption.OpenIfExists);
            await FileIO.WriteTextAsync(file, textBox1.Text);
            ApplicationData.Current.LocalSettings.Values["text"] = true;

            
        }

        
    }
}
