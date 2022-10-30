using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;
using System.Net.Sockets;
using System.IO;
namespace Chat_Server
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Mohammed Sabry Yousef");
            Console.WriteLine("CS");
            Console.WriteLine("3");
            IPEndPoint iep = new IPEndPoint(IPAddress.Any, 8000);
            Console.WriteLine("Listening at IP: 127.0.0.1, Port: 8000");
            Socket newserver = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            newserver.Bind(iep);
            newserver.Listen(100);
            Socket clientsock = newserver.Accept();
            Console.WriteLine("Client Accepted");
            string fileName = args[0];
            int lName = fileName.Length;
            string fileContent = File.ReadAllText(fileName);
            int lCont = fileContent.Length;
            byte[] mess = new byte[4 + lName + lCont];
            byte[] lenn = BitConverter.GetBytes(lName);
            for (int i = 0; i < 4; ++i) mess[i] = (byte)((int)lenn[3 - i]);
            for (int i = 4; i < lName + 4; ++i) mess[i] = (byte)fileName[i - 4];
            for (int i = lName + 4; i < lCont + lName + 4; ++i) mess[i] = (byte)fileContent[i - (lName + 4)];
            Console.WriteLine("Sending File: {0}", args[0]);
            clientsock.Send(mess);
            Console.WriteLine("File Sent.");
            clientsock.Shutdown(SocketShutdown.Both);
            clientsock.Close();
        }
    }
}