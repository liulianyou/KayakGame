/*Copyright by LGL(SHORTCUT FOR LIULIANYOU, GAOYI, LIUFAZHI) from 2019-2019*/

The source struct should be floow the below rules:
+Source
 |----------+AI
 |----------+GamePlayAbility
 |----------+UI
 |----------+Item
 |----------+Player
 |----------+Sound
 |----------+TriggerEvent
 |----------+Mix

As the game's major game paly is AI, Player, Sound, and UI, so I lift them out.
The Mix fload will contain all files which is not belogn to these category.
The Trigger Event, is used to maintain the stroy line for LD just like missiion.
Stroy or the Mission is the sprint of the game so I lift it out.
Skills(GamePlayAbility), different skills is the main way the player can effect the game world, so I lift it out
Sound can expand the experience for the player to take part in the game.




 

 