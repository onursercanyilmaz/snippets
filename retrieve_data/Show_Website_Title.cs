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
using System.Net;
using HtmlAgilityPack;
using System.IO;

// Boş Sayfa öğe şablonu https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x41f adresinde açıklanmaktadır

namespace HtmlAgilityPack_Example
{
    /// <summary>
    /// Kendi başına kullanılabilecek ya da bir Çerçeve içine taşınabilecek boş bir sayfa.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
        }

        

        private void BtnGet_Click(object sender, RoutedEventArgs e)
        {
            string url = "https://portal.azure.com/#home";
            WebRequest request = HttpWebRequest.Create(url);
            WebResponse answer;
            answer = request.GetResponse();
            StreamReader source = new StreamReader(answer.GetResponseStream());

            string turned = source.ReadToEnd();
            int startTitle = turned.IndexOf("<title>") + 7;
            int endTitle = turned.Substring(startTitle).IndexOf("</title>");

            string title = turned.Substring(startTitle, endTitle);
            textBlock1.Text = title;
        }
    }
}
