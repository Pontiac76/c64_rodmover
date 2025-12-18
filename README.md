# c64_rodmover
My final 2000s college project I had to do for our programming course.  The original code (Now long gone) was written in C, or C++ (I can't remember now) and was a DOS application built on either a 386sx-16 or a 486dx-60.  THIS code is geared towards using the CC65 compiler to take this new C code and have it run on a Commodore 64, then maybe cross-compile it to run on a C128.

# The Grade System
The final exam for my college course in the early 2000s was to
- Indicate you had the knowledge to handle user input
- Indicate you had the knowledge to handle file management
- Indicate you had the knowledge to handle a process loop

I.. went overboard.

To get a D, you had to just get input and output something to the screen, like a simple menu system.  "1> Load menu; 2> Save menu; 3> Exit", or whatever

To get a C, you had to do the above, then handle very basic file handling.

To get a B, you had to do a little bit of screen work, fancy menus, or what have you.  More than just a simple "Press 1".

To get an A, you had to have some kind of view to the tasks running.

The instructor forgot about the A++ so I added;
- Animation of a robot arm going across the screen
- Ability to keep track of 6 jobs running at once
- Added some PC speaker level sound when the robot arm was moving
- Show on screen at what stage each task is at, or what step in the process
- Light bar menu system

# And what's this all about?
The task was pretty straight forward.  At the end of the day, the instructor wanted an application to EMULATE handling Robotics.  The exam was to write an application that would track a single metal rod, and "baste" that rod in a certain vat of some kind of fluid to have the metal staged to have certain properties.  So the robot would pick up a rod from a starting place, move it over to a vat of some kind of fluid, place the rod in the fluid, then wait for a certain amount of time, pull it out, and then drop it into another vat and repeat.  For each move, the rod had to sit sit in the vat for a certain amount of time before moving onto the next step.

The assumption for the exam was to just handle dealing with one single rod, start to finish, and the exam writer had full reign on how to handle this.

I took it to the program being able to know that it had to do any number of jobs, but ran 6 of those jobs concurrently, using only a single robot arm.  This introduced some "timing conflicts" which had to be resolved.

For example, if 6 programs were running, and the robot had to all of a sudden handle moving 3 rods at once, it takes time for the robot to move from vat 1 over to vat 10, drop down to pick up the rod, go back up, move over to vat 2, drop, then go back up.  That could take 3 to 5 seconds (Depending on how fast I made the robot animate).  So that'd mean that the 3rd rod to be moved could get old.  What happens if a rod is over cooked?  In my code that I submitted, I just marked the job to start over again.  I was going to move the over cooked rod to a "trash" or "recycle" bin, but just left that idea out.

# And the purpose?
As I said, this was a final exam, a simulator, no active real robots involved.  It was just to prove you had an understanding of how to do some basic to advanced stuff in C.

For me, I wanted to go the extra effort because even though I was brand new to C at the beginning of the course, I had a good couple of decades of programming experience in other languages at that point, and decided to kick it up a notch or twelve.

During the development back then, and I had the robot prototype moving around on the screen (Remember, DOS was 80x25 and DOS allowed DMA access to the video RAM, unlike in Windows) the idea of having more than just one program running simultaneously was an entertaining idea.  When I had the 6 programs running, seeing the robot just swish around on the screen was rather amusing, all the while watching the timers do their count down.

I "emulated" multitasking in the app back then, but, it really wasn't multitasking at all.  Not like we know it today.  I intend to re-emulate that with this project as well.
