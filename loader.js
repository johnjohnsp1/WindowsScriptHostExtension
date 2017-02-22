//Execute with C:\Windows\syswow64\cscript.exe loader.js

var actCtx = new ActiveXObject("Microsoft.Windows.ActCtx");
actCtx.Manifest = "MessageBox.manifest";
try
{
var DX = actCtx.CreateObject("MessageBox");
//Check for presence of DLL in Process Explorer, it will be there...
}
catch(e){
	WScript.Echo('Welp!');
	//Open Process Explorer... Dll Is "not" in loaded dll list...
	//Wonder if it would be in the memory dump... hmmmm...
	WScript.StdIn.ReadLine();
}
