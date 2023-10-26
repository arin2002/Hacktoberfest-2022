using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;
using System.Net.Sockets;
namespace Client
{
    class Program
    {
        static void Main(string[] args)
        {
            IPAddress host = IPAddress.Parse("127.0.0.1");
            IPEndPoint host_endpoint = new IPEndPoint(host, 8000);
            Socket clientsock = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.IP);
            clientsock.Connect(host_endpoint);
            string servermes = "";
            byte[] recmess = new byte[1024];
            int len = clientsock.Receive(recmess);
            servermes = Encoding.ASCII.GetString(recmess, 0, len);
            Console.WriteLine("Server Said: {0}", servermes);
            Console.WriteLine("Conversation Ended.");
            clientsock.Shutdown(SocketShutdown.Both);
            clientsock.Close();
        }
    }
}
