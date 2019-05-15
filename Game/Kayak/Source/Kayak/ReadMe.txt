/*Copyright by LGL(SHORTCUT FOR LIULIANYOU, GAOYI, LIUFAZHI) from 2019-2019*/

The source struct should be floow the below rules:
+Source
 |----------+Pawn
 |----------+Controller
 |----------+UI
 |----------+GameMode
 |----------+GamePlayClass

 I use this file struct is because the files' number of Pawn, Controller, UI, GameMode will be huge in the final project development.
 So I lift these files out from the GamePlayClass.
 Maybe you can say we can use a little calss of these types, and just distinguish them with the different configs, this sloution is not perfect as the code in these class will be a mass in the feature.
 The OOD should be the primary guidance to design classes.
 
 The GamePlayClass floder should contain all classes for the gameplay function such as interact with the object in the world.
 