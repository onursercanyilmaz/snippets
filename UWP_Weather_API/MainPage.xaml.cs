using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;
using System.Xml;
using System.Xml.Linq;

// Boş Sayfa öğe şablonu https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x41f adresinde açıklanmaktadır

namespace Weather_Using_API
{
    /// <summary>
    /// Kendi başına kullanılabilecek ya da bir Çerçeve içine taşınabilecek boş bir sayfa.
    /// </summary>
    public sealed partial class MainPage : Page
    {

        private const string api = "f67b1939839485f68ae2ecc166b4a01a";
        private const string connection = "http://api.openweathermap.org/data/2.5/weather?q=Istanbul&mode=xml&units=metric&appid=" + api; 

        public MainPage()
        {
            this.InitializeComponent();
            imageCloudly.Visibility = Visibility.Collapsed;
            imageSunny.Visibility = Visibility.Collapsed;

            XDocument weather = XDocument.Load(connection);

            var temperature = weather.Descendants("temperature").ElementAt(0).Attribute("value").Value;
            textDegree.Text = temperature.ToString() + " °C";

          
            var situation = weather.Descendants("clouds").ElementAt(0).Attribute("name").Value;
            textSituation.Text = situation.ToString();

            var place = weather.Descendants("city").ElementAt(0).Attribute("name").Value;
            textPlace.Text = place.ToString();


            DateTime now = DateTime.Now;
            textDate.Text = now.ToString();

            if(situation.Contains("clouds")==true)
            {
                imageCloudly.Visibility = Visibility.Visible;
            }
            else if (situation.Contains("sun") == true)
            {
                imageCloudly.Visibility = Visibility.Collapsed;
                imageSunny.Visibility = Visibility.Visible;
            }
        }

        
    }
}
