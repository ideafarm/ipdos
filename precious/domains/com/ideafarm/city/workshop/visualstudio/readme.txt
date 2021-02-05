
IPDOS (tm) incorporates OpenSSL.  The latter requires the Visual Studio 
runtime.  If IdeaFarm (tm) Bundle fails to start (i.e. if all processes die 
immediately), install the Visual Studio runtime by opening VC_redist.x86.exe .
If your computer is 64 bit, or you aren't sure, also open VC_redist.x64.exe .
(Both are needed on 64 bit Windows.)

Opening either of these programs will display a popup window asking you 
whether you accept Microsoft's license.  If the redistributable is already 
installed, you can click on "repair" or "uninstall" or "cancel".  So there 
isn't any harm in opening these programs.  If you are concerned about them 
being infected, you can obtain them directly from Microsoft.

When these runtimes are not installed, IdeaFarm (tm) Service will start, but 
the IPDOS (tm) processes that it launches will die immediately.  You can see 
this behavior by using Process Explorer.

