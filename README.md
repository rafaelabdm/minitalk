<h1 align="center">
	✏️ minitalk
</h1>

<p align="center"><br>
O propósito desse projeto é trocar dados entre programas usando UNIX signals. 😊<br>
The purpose of this project is to code a small data exchange program using UNIX signals. 😊<br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/rafaelabdm/minitalk?color=lightblue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/rafaelabdm/minitalk?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/rafaelabdm/minitalk?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/rafaelabdm/minitalk?color=green" />
</p>

---

<h2>💻 About the project</h2>

> _Send me a sign!_
<p>
Esse projeto é uma troca de mensagens entre cliente e servidor. Mas ela só pode ser feita usando dois UNIX signals.<br>
O propósito dele é nos fazer trabalhar com a biblioteca signals.h e com manipulação de bits.<br>
<br>
This is a data exchange between server and client project. But you can only do it using only two UNIX signals.<br>
Its purpose is to make us work with the signals.h library and bit manipulation.<br>
</p>

<h2>📱 Rules of the comunication between client and server:</h2>

<p>
• O servidor de ver isinicado primeiro. Depois de lançado ele deve imprimir seu PID.<br>
• O cliente recebe dois parâmetros: o PID do servidor e a menssagem a ser mandada.<br>
• O cliente deve mandar a menssagem passada como parâmetro para o servidor. Uma vez que a mensagem for recebida o servidor deve printa-la.<br>
• O servidor tem que mostrar a string bem rápido. Rápido significa que se você acha que está demorando muito, provavelmente está mesmo.<br>
• Seu servidor deve conseguir receber mensagens de diversos clientes em sequêcia sem que precise reiniciar.<br>
• A comunicação entre cliente e servidor tem que ser feita usando apenas UNIX signals.<br>
</p>

---

<p>
• The server must be started first. After its launch, it has to print its PID.<br>
• The client takes two parameters: the server PID, the string to send.<br>
• The client must send the string passed as a parameter to the server. Once the string has been received, the server must print it.<br>
• The server has to display the string pretty quickly. Quickly means that if you think it takes too long, then it is probably too long.<br>
• Your server should be able to receive strings from several clients in a row without needing to restart.<br>
• The communication between your client and your server has to be done only using UIX signals.<br>
</p>
