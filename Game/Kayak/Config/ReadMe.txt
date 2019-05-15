Copyright by LGL(SHORTCUT FOR LIULIANYOU, GAOYI, LIUFAZHI) from 2019-2019

All the config files should be stored here.
Excel/XML/JSON files should be the original files which can be manipulated by designers.
We should use the other tools to convert the humman readable files to to the binary files.
The humman readable files will not be pakced in the shipping version and our game will only use binary files.
the file name should follow the below rules:
A:CLIENT / SERVER (DEFAULT VALUE: CLIENT | SERVER)
	1)£ºwith the suffix of SERVER means this file will only be used the DEDICATED SERVER
	2): with the suffix of CLIENT menas this file will only be used by the CLIENT.
	3): if the name doesn't contain either server or client means these files should be used both the DEDICATED SERVER and CLIENT, JUSET THE SAME AS HAVE SERVER AND CLIENT FLAGS.
B:PACKED / UNPACKED (DEFAULT VALUE: PACKED)
	1): with the suffix of PACKED means this file will be pakced in the final shipping version
	2): with the suffix of UNPACKED means this file will not be packed in the final shipping version, most time these file only used for debug or DEDICATED SERVER
	3): without any suffix of PACKED AND UNPACKED, we will treat it as PACKED.
