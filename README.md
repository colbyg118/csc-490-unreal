# csc-490-unreal
A project by Colby Gamble and Mayur Suresh that utilizes Unreal Engine 5 to experiment with OpenAIAPI

The design of this project has an Unreal Game world with a playable character and an NPC. When the player walks near the NPC, they can interact with the F key to bring up a chat box and dialogue box. By pressing Shift + F1, the player can bring up their cursor so they can interact with the chat box and type their question for the NPC. The NPC will then use an external python script that calls the OpenAIAPI to generate dialogue in response to the question asked.

Steps for setting up this project:
 - Insert OpenAIAPI key in the script.py file
 - Download dependent libraries for the script. There are two methods of doing this:
	- Run the libscript.py file inside of Unreal Editor using the Execute Python Script... Tool
	- Copy path to "UE/Engine/Binaries/Win64/Thirdparty/python.exe", which will be wherever Unreal Engine 5 is installed. Paste the path into a terminal encaspulated with double quotes, and then add "pip -m install OpenAI" afterwards without the quotes. Run that command.

The project should work now. If there is an error with the OpenAIApi plugin when launching the project, delete it from the Plugins folder and add a fresh install from https://drive.google.com/drive/folders/16FFYDf0U--nxUocQVXCIvSo-Sa0Tnndl. Chooose the 5.0.x version.