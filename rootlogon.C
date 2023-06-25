void rootlogon(){
    
    //gSystem->Load("C:\\Users\\wangz\\Desktop\\ROOT_Macro\\Frog_Seabreeze\\PI_Programming_Files_PI_GCS2_DLL\\PI_GCS2_DLL.lib");
    int flag=gSystem->Load("C:\\Users\\wangz\\Desktop\\ROOT_Macro\\Frog_Seabreeze\\PI_Programming_Files_PI_GCS2_DLL\\PI_GCS2_DLL.dll");
    if (flag){
        cout<<"Fail to load the dll file for PI stage!!!"<<endl;}
    else{
        cout<<"It works!!!"<<endl;
    }
    gSystem->Load("C:\\Users\\wangz\\Desktop\\ROOT_Macro\\Frog_Seabreeze\\SeaBreeze\\os-support\\windows\\VisualStudio2010\\Release\\SeaBreeze.dll");
    gROOT->ProcessLine(".include C:\\Users\\wangz\\Desktop\\ROOT_Macro\\Frog_Seabreeze\\PI_Programming_Files_PI_GCS2_DLL");
    gROOT->ProcessLine(".include C:\\Users\\wangz\\Desktop\\ROOT_Macro\\SerialPort\\src");
    gROOT->ProcessLine(".include C:\\Users\\wangz\\Desktop\\ROOT_Macro\\SerialPort\\include");
    gROOT->ProcessLine(".include C:\\Users\\wangz\\Desktop\\ROOT_Macro\\Frog_Seabreeze\\SeaBreeze\\include");

}