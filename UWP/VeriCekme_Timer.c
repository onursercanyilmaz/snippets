using HtmlAgilityPack;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Text;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;
using System.Timers;
using Windows.UI.Xaml.Media.Imaging;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace VeriCekme
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        DispatcherTimer timer1 = new DispatcherTimer();
        public String html;
        public Uri url;
        public MainPage()
        {
            this.InitializeComponent();

            timer1.Interval = TimeSpan.FromSeconds(10);
            timer1.Tick += Timer1_Tick;
            timer1.Start();

        }

        private void Timer1_Tick(object sender, object e)
        {
            textBlock.Text = "Ethereum: "+SitedenStringCek("https://coinmarketcap.com/", "//*[@id='__next']/div/div[2]/div/div/div[2]/table/tbody/tr[2]/td[4]/div/a");
            textBlock2.Text = SitedenResimLinkiCek("https://www.kitapyurdu.com/index.php?route=product/publisher_products/all&publisher_id=1689&sort=purchased_365&order=DESC&filter_in_stock=1", "//*[@id='product - 434330']/div[1]/div[2]/a");

            // image.Source = new BitmapImage(new Uri("https://img.kitapyurdu.com/v1/getImage/fn:11346311/wh:true/wi:256"));
           // image.Source = SitedenResimCek("https://www.kitapyurdu.com/index.php?route=product/publisher_products/all&publisher_id=1689&sort=purchased_365&order=DESC&filter_in_stock=1", "//*[@id='products']/div[4]/div/div[1]/a/img");
           
        }

        //kidega
        //amazon
        //dr


        public static string SitedenStringCek(string url, string xPath)
        {
       
            string data = "";
            Uri _url = new Uri(url);
            HtmlDocument doc = new HtmlDocument();
            try
            {
                var request = (HttpWebRequest)WebRequest.Create(_url);
                request.Method = "GET";
                using (var response = (HttpWebResponse)request.GetResponse())
                {
                    using (var stream = response.GetResponseStream())
                    {
                        doc.Load(stream, Encoding.UTF8);
                    }
                }
                data = doc.DocumentNode.SelectSingleNode(xPath).InnerHtml.Trim();
            }
            catch (WebException ex)
            {
                return ex.Message.ToString();
            }
                
            return data;
        
        }


        public static ImageSource SitedenResimCek(string url, string xPath)
        {


            string data = "";
            Uri _url = new Uri(url);
            HtmlDocument doc = new HtmlDocument();
            try
            {
                var request = (HttpWebRequest)WebRequest.Create(_url);
                request.Method = "GET";
                using (var response = (HttpWebResponse)request.GetResponse())
                {
                    using (var stream = response.GetResponseStream())
                    {
                        doc.Load(stream, Encoding.UTF8);
                    }
                }
                data = doc.DocumentNode.SelectSingleNode(xPath).Attributes["src"].Value;
                Image img = new Image();

                BitmapImage bitmapImage = new BitmapImage();
                Uri uri = new Uri(data);
                bitmapImage.UriSource = uri;
                img.Source = bitmapImage;
                var result = img.Source;
                return result;
            }
            catch (WebException ex)
            {
                throw;
            }



        }



        public static string SitedenResimLinkiCek(string url, string xPath)
        {
            try
            { 

            string data = "";
            Uri _url = new Uri(url);
            WebClient client = new WebClient();
            HtmlDocument doc = new HtmlDocument();
            String html = client.DownloadString(_url);
            doc.LoadHtml(html);
           
                data = doc.DocumentNode.SelectSingleNode(xPath).Attributes["href"].Value;
              
                return data;
            }
            catch (WebException ex)
            {
                throw;
            }



        }
    }
}
