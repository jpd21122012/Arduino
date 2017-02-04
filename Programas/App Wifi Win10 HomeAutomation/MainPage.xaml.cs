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
using Microsoft.Maker.RemoteWiring;
using Microsoft.Maker.Serial;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace App4
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();

            this.InitArduino(); //Init Arduino connection
            ToggleSwitch lightBulb = new ToggleSwitch();
        }

        RemoteDevice arduino;
        NetworkSerial netWorkSerial;

        public void InitArduino()
        {
            //Establish a network serial connection. Replace with your IP and port specified in the Arduino File
            netWorkSerial = new NetworkSerial(new Windows.Networking.HostName("192.168.2.144"), 3030);

            //Create Arduino Device
            arduino = new RemoteDevice(netWorkSerial);

            //Attach event handlers
            netWorkSerial.ConnectionEstablished += NetWorkSerial_ConnectionEstablished;
            netWorkSerial.ConnectionFailed += NetWorkSerial_ConnectionFailed;

            //Begin connection
            netWorkSerial.begin(9600, SerialConfig.SERIAL_8N1);
        }

        private void NetWorkSerial_ConnectionEstablished()
        {
            //Set pins to Output
            arduino.pinMode(6, PinMode.OUTPUT);
            arduino.pinMode(7, PinMode.OUTPUT);
            arduino.pinMode(8, PinMode.OUTPUT);
            arduino.pinMode(9, PinMode.OUTPUT);
            arduino.pinMode(10, PinMode.OUTPUT);
            arduino.pinMode(11, PinMode.OUTPUT);
        }

        private void NetWorkSerial_ConnectionFailed(string message)
        {
            System.Diagnostics.Debug.WriteLine("Arduino Connection Failed: " + message);
        }

        private void textBlock_SelectionChanged(object sender, RoutedEventArgs e)
        {

        }

        private void lightBulb_Toggled(object sender, RoutedEventArgs e)
        {
            if (lightBulb.IsOn == true)
            {
                arduino.digitalWrite(6, PinState.HIGH);
            }
            else
            {
                arduino.digitalWrite(6, PinState.LOW);
            }
        }

        private void waterHeater_Toggled(object sender, RoutedEventArgs e)
        {
            if (waterHeater.IsOn == true)
            {
                arduino.digitalWrite(7, PinState.HIGH);
            }
            else
            {
                arduino.digitalWrite(7, PinState.LOW);
            }
        }

        private void fan_Toggled(object sender, RoutedEventArgs e)
        {
            if (fan.IsOn == true)
            {
                arduino.digitalWrite(8, PinState.HIGH);
            }
            else
            {
                arduino.digitalWrite(8, PinState.LOW);
            }
        }

        private void tv_Toggled(object sender, RoutedEventArgs e)
        {
            if (tv.IsOn == true)
            {
                arduino.digitalWrite(9, PinState.HIGH);
            }
            else
            {
                arduino.digitalWrite(9, PinState.LOW);
            }
        }

        private void ac_Toggled(object sender, RoutedEventArgs e)
        {
            if (ac.IsOn == true)
            {
                arduino.digitalWrite(10, PinState.HIGH);
            }
            else
            {
                arduino.digitalWrite(10, PinState.LOW);
            }
        }

        private void dishWasher_Toggled(object sender, RoutedEventArgs e)
        {
            if (dishWasher.IsOn == true)
            {
                arduino.digitalWrite(11, PinState.HIGH);
            }
            else
            {
                arduino.digitalWrite(11, PinState.LOW);
            }
        }
    }
}
