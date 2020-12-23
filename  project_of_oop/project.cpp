#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// this is frist class 
class frontpage
{
    private:
    int choice;
    public:
    frontpage()
    {
        choice =0;
    }
    void  show_some_data()
    {
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl; 
        cout << " WELCOME TO THE SALTE " << endl;
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

        cout << "                                   " << endl;

        cout << "Message Of The Day" << endl;

        cout << "                                           " << endl;
cout <<" ----------------------------------------------------------------------------------" << endl;
        cout << "If you face service temporarily unavailable or internal server error," << endl;
        cout << " clear your browser cookies and check it again or you can use IP address" << endl;
        cout << " http://203.124.42.218:8080/portal for accessing SLATE." << endl;
        cout <<"----------------------------------------------------------------------------------" << endl;

        cout << "                                                  " << endl;
cout <<"-----------------------------------------------------------------------------------------------" << endl;
        cout << "Dear Students" << endl;
        cout << "Do not reply or send assignments to the email notifications sent to you by SLATE." << endl;
        cout << "Kindly email your concerns/submissions to your instructor's email address directly." << endl;
        cout <<"--------------------------------------------------------------------------------------------------" << endl;

        cout << "                                                                      " << endl;

        cout << "For any query you can contact us at:" << endl;
        cout << "Support for Faisalabad: slatefsd@nu.edu.pk" << endl;
        cout << "Support for Islamabad: slateisb@nu.edu.pk" << endl;
        cout << "Support for Karachi: slatekhi@nu.edu.pk" << endl; 
        cout << "Support for Lahore: slatelhr@nu.edu.pk" << endl;
        cout << "Support for Peshawar: slatepwr@nu.edu.pk:" << endl;
        cout << "- For account (username/password) related queries please email us from NU mail account or contact  Academic Officials" << endl;
        cout << "Welcome to the SLATE Demo. The Demo configuration was created as a way to let you get an instance of SLATE up and running quickly and easily." << endl;


    cout << "                                                   " << endl;

        cout << "     Gateway Accessibility Information The Sakai Project " << endl;

        cout << "Powered by Sakai(Opens in a new window)" << endl;
        cout << "Copyright 2003-2020 The Apereo Foundation. All rights reserved. Portions of Sakai are copyrighted by other parties as described in the Acknowledgments screen." << endl;
        cout << "Build Info:" << endl;
        cout << "Server Time:" << endl;

    }
    void check_features()
    {
        cout << " | press 1 for About |" << endl;
        cout << " | press  2 for Features |" << endl;
        cout << " |press  3 for site broweser" << endl;
        cout <<"  | press   4 for for training |" << endl;
        cout <<" | press  5 for Acknowledgments |" << endl;

        cout <<"========== press 6 for quit ==================" << endl;
        cout << "enter your choice " << endl;
        cin >> choice;
        if(choice==1)
        {
            cout << "About SLATE" << endl;
            cout << "Sakai Learning And Teaching Environment (SLATE) is the central collaboration and learning management system." << endl;
            cout << "It provides an online space where students access learning resources within course sites," << endl;
            cout << "participate in online activities, and communicate with faculty, staff and other students." << endl;
            cout << "Submit their course work assignments and deliverable; take their online quizzes and exams." << endl;
            cout <<"All courses offered by the University have a corresponding course Site." << endl;
            cout <<"SLATE also contains community websites which are used to support a range of other teaching and learning activities." << endl;
        }
        else if(choice==2)
        {
            cout << "::Capabilities::" << endl;
            cout << "SLATE offers a variety of capabilities for use in course and project sites, including:" << endl;
            cout << "~Home~: 	View recent announcements, discussions, and chat activity:" << endl;
            cout << "~Announcements~: 	Post current, time-critical information " << endl;
            cout <<"~Assignments~: 	Post assignments and receive submissions online " << endl;
            cout << "~Basiclti~: 	Launch and exchange information with externally-hosted tools" << endl;
            cout << "~Chat Room~: 	Participate in real-time, written conversations" << endl;
            cout << "~Drop Box~: 	Allow private file-sharing between instructors and students "<< endl;
            cout << "~Entity Broker~: 	Provides a set of RESTful APIs that support interoperability between SLATE tools." << endl;
            cout << "~Email Archive~: 	Maintain an archive of all email sent to the worksite's email list" << endl;
            cout << "~Gradebook~: 	Compute and store grades" << endl;
            cout << "~Help~: 	Access help documentation" << endl;
            cout << ":~Lessons~: 	Can organize the course by unit, module, week, topic, or any other grouping the instructor creates. " << endl;
            cout << "Lessons leverages the power of other SLATE tools like Assignments, and Test and Quizzes. " << endl;
            cout << "Membership 	Choose sites in which you would like to participate" << endl;
            cout << "~Messages and Forums~: 	Create discussion forums and communicate between site groups and users using internal mail" << endl;
            cout << "~News~: 	Display an RSS feed from an external site" << endl;
            cout << "~Podcasts~: 	View podcasts" << endl;
            cout <<"~Polls~: 	Create site-based surveys and polls" << endl;
            cout << "~Portfolios~: 	Supports portfolio-based activities with a suite of tools. " << endl;
            cout << "~Post'em~: 	Provides functionality for uploading .csv formatted files to display feedback (e.g., comments, grades) to site participants." << endl;
            cout << "~Preferences~:	Set your personal preferences, such as time zone, tab order" << endl; 
            cout << "~Profile~: 	Provides a Facebook-style interface for editing user profiles; includes Twitter integration" << endl;
            cout << "~Quartz Scheduler~: 	Schedule and run cron jobs" << endl;
            cout << "~Resources~: 	Add documents and URLs to your worksite" << endl;
            cout <<" ~Roster~: 	View list of site participants" << endl; 
            cout <<"~Schedule~: 	Keep track of important dates and deadlines on worksite calendar" << endl;
            cout <<"~Search~: 	Provides search capabilities of SLATE content" << endl;
            cout <<"~Section Info~: 	Manage sections or groups within a site" << endl;
            cout <<"~Shortened URL Service~: 	A simple service that allows tools and services to shorten links to anything, either via the Java-based service or the Entity Provider." << endl; 
            cout <<"~Signup tool~: 	Schedule instructor and ta office hours, study groups, and review sessions." << endl;
            cout <<"~Site Info~: 	View worksite profile and participants list" << endl;
            cout <<"~Site Stats~: 	View site usage statistics" << endl;
            cout <<"~Syllabus~: 	Create a worksite syllabus" << endl;
            cout <<"~Tests & Quizzes~: 	Create, administer, and correct tests and quizzes online" << endl;
            cout <<"and automatically feed the results to the Gradebook Web Content Include external website content in your worksite" << endl;
            cout << "~Wiki~: 	Collaboratively edit simple web pages" << endl;
            cout <<"~Worksite Setup~: 	Create and manage sites " << endl;
            cout <<"~Webservices~: 	Includes a rich collection of web services for system admins" << endl;
        }
        else if(choice== 3)
        {
            cout <<"Search for pSites" << endl;
            cout <<"Complete the form below to find specific sites." << endl;

            cout <<"Type of Site:" << endl;
            cout <<"o"<<"\t"<<"course"<< endl;
            cout <<"o"<<"\t"<<"Academic Term:"<< endl;
            cout <<"o"<<"\t"<<"portfolio" << endl;
            cout <<"o"<<"\t"<< "project" << endl;
            cout <<"o"<<"\t"<< "teacher" << endl;

        }
        else if(choice==4)
        {

            cout <<" -------- Training -----------" << endl;
            cout <<"User trainings and support regarding SLATE are available all the time to all the users. " << endl;

            cout <<"For any query regarding SLATE Email us at: " << endl;

            cout <<"Support for Faisalabad: slatefsd@nu.edu.pk" << endl;

            cout <<"Support for Islamabad: slateisb@nu.edu.pk" << endl;

            cout <<"Support for Karachi: slatekhi@nu.edu.pk" << endl;

            cout <<"Support for Lahore: slatelhr@nu.edu.pk" << endl;

            cout <<" Support for Peshawar: slatepwr@nu.edu.pk" << endl;
        }
        else if(choice==5)
        {
            cout <<"Copyright 2003-2014 The Apereo Foundation. All rights reserved." << endl;

            cout << "Sakai is licensed for use pursuant to the Educational Community License v. 2.0. " << endl; 
            cout <<"Portions of Sakai are copyrighted by other parties, including the parties listed below." << endl;
            cout <<"Please refer to the licenses directory for complete copyright and licensing information." << endl;

            cout <<" ---------- Acknowledgments --------------" << endl;
            cout << "Portions of Sakai were developed by Cambridge University, Georgia Tech, Indiana University, Lancaster University, MIT, Oxford University, Stanford University, rSmart Corporation,"  << endl;
            cout <<" The Australian National University, Unicon Corporation, Universidad Politechnica De Valencia, Universitat de Lleida, University of Cape Town, University of California Berkeley," << endl;
            cout <<" University of Michigan, University of Toronto, Virginia Tech, and others. (http://www.sakaiproject.org/)." << endl;

            cout <<"This product includes software developed by the Apache Software Foundation (http://www.apache.org)." << endl;

            cout <<"The jaxen library is provided by The Werken Company. (http://jaxen.codehaus.org/). " << endl;

            cout <<"This product includes software developed by the JDOM Project (http://www.jdom.org/)." << endl;

            cout <<"This product includes software developed by the Pluto Project (http://portals.apache.org/pluto/)." << endl;

            cout <<"This product includes software developed by the DOM4J Project (http://www.dom4j.org)." << endl;
            cout <<"This product includes software developed by the MX4J project (http://sourceforge.net/projects/mx4j)." << endl;

            cout <<"This product includes software developed by the SAXPath Project (http://sourceforge.net/projects/saxpath)." << endl;

            cout <<"This product includes copyrighted software developed by E. Wray Johnson for use and distribution by the Object Data Management Group (http://www.odmg.org/)." << endl;

            cout <<"Portions Copyright (c) 1999 Sun Microsystems, Inc. All Rights Reserved" << endl;

            cout <<"WebSPHINX is Copyright (c) 1998-2002 - Carnegie Mellon University." << endl;

            cout <<"This product includes Silk Icons developed by Mark James and are available at (http://www.famfamfam.com/lab/icons/silk/)" << endl;

            cout <<"This product includes both the CKEditor and FCKEditor, text editors for Internet software, Copyright (c) 2003 - 2011 CKSource - Frederico Knabben (http://ckeditor.com/). "<< endl;

            cout <<"This product includes jQuery - Copyright (c) 2006 John Resig http://www.jquery.com" << endl;

            cout <<"Portions Copyright IMS Global Learning Consortium (http://www.imsglobal.org/)" << endl;

            cout <<"Sakai includes support for IMS Learning Tools Interoperability (LTI) 1.0, 1.1, and 2.0 Tool Consumer." << endl;

            cout <<"This product makes use of jQuery fontIconPicker under the MIT License." << endl;

            cout <<"This product makes use of Font Awesome by Dave Gandy under the MIT License. All brand icons are trademarks of their respective owners." << endl;
        }
    }  
    ~frontpage()
    {
        cout<<"call the destructor " << endl;
    }  
    friend class student_data;  

};

// this is second class
class student_data:public frontpage
{
    protected:
    int roll_no;
    char c;
    char a;
    int password;
    public:
    void set_data()
    {
        cout <<"enter user ID" << endl;
        cin >> roll_no;
        cout <<"enter your password" << endl;
        cin >> password;
    }
    void get_data()
    {
        cout <<"Your profile is " << endl;
        cout <<" ======= M.JAWAD KHAN ====== "  << endl;
        cout << " user ID is" << "\t" << roll_no << endl;
        cout <<"your user password  is " << "\t" << password << endl;
        if(roll_no==190053 && password== 12345 )
        {
        cout << "*********************************************************************" << endl;
        cout <<"Welcome to your personal workspace." << endl;
        cout <<"In SLATE each user has his or her own individual worksite called Home." << endl;
        cout <<" Home is a place where you can keep personal documents,"<<endl;
        cout <<" create new sites, maintain a schedule, store resources, and much more." << endl;

        cout <<"***********************************************************************" << endl;


           cout <<" ======== your courses are ============== " << endl;
           cout <<"COMPUTER ORGANIZATION AND ASSEMBLY LANGUAGE " << endl;
           cout <<"COMPUTER ORGANIZATION AND ASSEMBLY LANGUAGE (LAB)" << endl;
           cout <<"LINEAR ALGEBRA" << endl;
           cout << "FUNDAMENTAL OF MANAGMENT" << endl;
           cout <<"OBJECT ORIENTED PROGRAMMING " << endl;
           cout <<"OBJECT ORIENTED PROGRAMMING (LAB)" << endl;
           cout <<"DISCRETE STRUCTURE"  << endl;

           cout <<"*******************************************************************" << endl;
           do
           {
               char get;
               cout <<"--- these are your courses ------" << endl;
               cout << "--- press 'c' for assebmly language course" << endl;
               cout << " ---- press 'l' for assembly language lab " << endl;
               cout << "---- press 'g' for linear algebra course" << endl;
               cout << "---- press 'f' for management course" << endl;
               cout << "--- press 'o' for object oriented programming course" << endl;
               cout << " ----- press 'c' for oop (lab)" << endl;
               cout << " ----- press 'd' for discrete structure " << endl; 
               cout <<"enter your option to choose the course" << endl;
               cin >> get;
               if(get=='c')
               {
                   cout << "--- (OVERVIEW) --- " << endl;
                   cout <<"--- (site info display) ---- " << endl;
                   cout << "Welcome to Course Comp. Organization and Assembly Lang., Offered by CS Department in Fall 2020 at Peshawar Campus " << endl;
                   char z='y';
                   while (z=='y')
                   {
                       cout <<"press 's' for syllbus" << endl;
                       cout <<"pess 'a' for Announcements " << endl;
                       cout << "press 'r' for resources" << endl;
                       cout << "press 'f' for forums" << endl;
                       cout << " press 'b' for assigment" << endl;
                       cout << "press 't' for tests & quizzes" << endl;
                       cout << "press 'g' for grand book classic" << endl;
                       cout << "press 'd' for drop box" <<endl;
                       cout <<"press 'c' for chat room" << endl;
                       cout << "press 'w' for wiki" << endl;
                       cout <<"press 'i' for section info" << endl;
                       cout << "press 'z' for site info" << endl;
                       char ch;
                       cout <<"enter the option" << endl;
                       cin >> ch;
                       if(ch=='s')
                       {
                           cout <<"(# SYLLBUS #)--------"; 
                           cout <<"you have currently no syllbus for this course" << endl;
                       }
                       else if(ch=='a')
                       {
                           string abc;
                           string name;
                           int date;
                           cout <<"enter the announcment" << endl;
                           cin >> abc;
                           cout <<"enter the intructor name" << endl;
                           cin >> name;
                           cout <<"enter the laste submission date" << endl;
                           cin >> date;
                           cout << "the announcment is " << "\t" << abc << endl;
                           cout << "the inturctor name is" << "\t" << name << endl;
                           cout <<"the date is " << "\t" << date << endl;
                       }
                       else if(ch=='r')
                       {
                           cout <<"(# RESOURCES #) ---- " << endl;
                           cout <<"there are currently no resoures for this course" << endl;
                       }
                       else if(ch=='f')
                       {
                           cout <<"(# FORUMS #)--- " << endl;
                           cout << "Comp. Organization and Assembly Lang. CS 2020-03 PWR Forum " << endl;
                           cout << "Topic FolderGeneral Discussion 0 unread of 0 messages " << endl;
                       }
                       else if(ch=='b')
                       {
                           cout <<"ASSIGNMENT--" << endl;
                           cout <<"(ASSIGNMENT LIST)" << endl;
                           string at,status;
                           int dat;
                           cout <<"enter the assignment title" << endl;
                           cin >> at;
                           cout <<"enter the your assignment status" << endl;
                           cin >> status;
                           cout <<"enter the date" << endl;
                           cin >> dat;

                           cout <<"the assignment title"  <<"\t" << at << endl;
                           cout << "your assignmet status" <<"\t" <<  status << endl;
                           cout << "yout date" <<"\t" <<  dat << endl;
                       }
                       else if(ch=='t')
                       {
                           cout <<"(#  Tests & Quizzes #)---" << endl;
                           cout << "(Assessments)---" << endl;
                           
                           cout << "Take an Assessment-------" << endl;
                           cout <<"There are currently no assessments available for you to take." << endl;
                           cout <<" Submitted Assessments------" << endl;
                           cout <<"You have not yet submitted any assessments." << endl;  
                       }
                       else if(ch=='g')
                       {
                           cout <<"(# GRANDE BOOK CLASSES #)" << endl;
                           cout <<"(Grade Report for Muhammad Jawad Khan p190053)" << endl;
                           cout << "(Course Grade)" << "\t" << "Not yet available" << endl;
                           cout << "(Legend:)" << endl;
                           cout << "*Grades in parentheses () are not included in the course grade calculation. " <<endl;
                        }
                        else if(ch=='d')
                        {
                                cout <<  " p190053, Muhammad Jawad Khan (p190053) p190053, Muhammad Jawad Khan (p190053) " << endl;

                                cout << "Files in your Drop Box can only be seen by you and the site maintainers. Other participants cannot access them." << endl;
                        }
                        else if(ch=='c')      
                        {
                            cout <<"(# chat room #)" << endl;
                            cout << "Currently viewing messages for 'Main Chat Room'View" << endl;
                            string um;
                            int rn;
                            string message;
                            cout <<"enter the user name" << endl;
                            cin >> um;
                            cout <<"enter the roll number" << endl;
                            cin >> rn;
                            cout <<"enter your message" << endl;
                            cin >> message;

                            cout <<"the user is" <<"\t" <<  um << endl;
                            cout <<"the ro_number is"<<"\t" << rn << endl;
                            cout << "the user message is" <<"\t" << message << endl;
                        }   
                        else if(ch=='w')
                        {
                            cout <<"--- (Welcome to the Wiki Tool) ---" << endl;
                            cout << "What is a wiki?" << endl;
                            cout << "A wiki is a tool which allows people to create web pages individually or as a group, without needing any web skills." << endl;
                            cout << "Using the wiki tool, you can create and edit web pages within your worksite. If you wish, you can make all or some pages publicly viewable. " << endl;

                            cout << "--- ( Using wikis for teaching ) ---" << endl;
                            cout << "There are a wide number of ways to use wikis for teaching - a web search will find any number of suggestions and case studies." << endl; 
                            cout <<" For example, students can develop a collection of resources about the topic they are studying, and make them available to the outside world."<< endl; 
                            cout << "Other lecturers like to produce a wiki page as a way of publishing lecture notes and course guidance for students to read but not edit. " << endl;

                            cout << "--- (Using wikis for research groups) ---" << endl;
                            cout << "A wiki allows people to work on producing a document together, such as to draft research proposals as a team, or to keep an up to date list of project contacts. " << endl;

                            cout << "--- (How do we get started?) ---" << endl;
                            cout << " This is the home page for your wiki. To add text to it: " << endl;
                        } 
                        else if(ch=='i')
                        {
                            cout << "(#  Section Info #)" << endl;
                           cout << " Section Memberships" << endl;
                          cout <<" You must contact your instructor to join or switch sections. " << endl;
                          cout <<"-- LECTURE SECTION ---" << endl;
                           cout << "Comp. Organization and Assembly Lang. BCS-3A	" << endl;	 
                           cout << "Comp. Organization and Assembly Lang. BCS-3B" << endl;
                        }  
                        else if (ch=='z')
                        {
                            cout <<"(# site info #)" << endl;
                            cout << "Comp. Organization and Assembly Lang. CS 2020-03 PWR " << endl;
                            cout << "(Site URL)" << "\t" <<  "	http://slate.nu.edu.pk/portal/site/PWREE213FALL2020CS " << endl;
                            cout << "Site contact and email )" << "\t" << "	SLATE Peshawar Administrator, slatepwr@nu.edu.pk" << endl;
                            cout << "(LaTeX)" << "\t" <<  "	Disabled " << endl;
                        }

                    cout << "if you want to check more course then simplt press y ***" << endl;
                       cout <<"press y to countinue" << endl;
                       cin >> z;
                    }        
               }
               else if(get=='l')
               {
                   cout << "--- (OVERVIEW) --- " << endl;
                   cout <<"--- (site info display) ---- " << endl;
                   cout << "Welcome to Course Comp. Organization and Assembly Lang (LAB)..., Offered by CS Department in Fall 2020 at Peshawar Campus " << endl;

                      char z='y';
                   while (z=='y')
                   {
                       cout <<"press 's' for syllbus" << endl;
                       cout <<"pess 'a' for Announcements " << endl;
                       cout << "press 'r' for resources" << endl;
                       cout << "press 'f' for forums" << endl;
                       cout << " press 'b' for assigment" << endl;
                       cout << "press 't' for tests & quizzes" << endl;
                       cout << "press 'g' for grand book classic" << endl;
                       cout << "press 'd' for drop box" <<endl;
                       cout <<"press 'c' for chat room" << endl;
                       cout << "press 'w' for wiki" << endl;
                       cout <<"press 'i' for section info" << endl;
                       cout << "press 'z' for site info" << endl;
                       char ch;
                       cout <<"enter the option" << endl;
                       cin >> ch;
                       if(ch=='s')
                       {
                           cout <<"(# SYLLBUS #)--------"; 
                           cout <<"you have currently no syllbus for this course" << endl;
                       }
                       else if(ch=='a')
                       {
                           string abc;
                           string name;
                           int date;
                           cout <<"enter the announcment" << endl;
                           cin >> abc;
                           cout <<"enter the intructor name" << endl;
                           cin >> name;
                           cout <<"enter the laste submission date" << endl;
                           cin >> date;
                           cout << "the announcment is " << "\t" << abc << endl;
                           cout << "the inturctor name is" << "\t" << name << endl;
                           cout <<"the date is " << "\t" << date << endl;
                       }
                       else if(ch=='r')
                       {
                           cout <<"(# RESOURCES #) ---- " << endl;
                           cout <<"there are currently no resoures for this course" << endl;
                       }
                       else if(ch=='f')
                       {
                           cout <<"(# FORUMS #)--- " << endl;
                           cout << "Comp. Organization and Assembly Lang (LAB). CS 2020-03 PWR Forum " << endl;
                           cout << "Topic FolderGeneral Discussion 0 unread of 0 messages " << endl;
                       }
                       else if(ch=='b')
                       {
                           cout <<"ASSIGNMENT--" << endl;
                           cout <<"(ASSIGNMENT LIST)" << endl;
                           string at,status;
                           int dat;
                           cout <<"enter the assignment title" << endl;
                           cin >> at;
                           cout <<"enter the your assignment status" << endl;
                           cin >> status;
                           cout <<"enter the date" << endl;
                           cin >> dat;

                           cout <<"the assignment title"  <<"\t" << at << endl;
                           cout << "your assignmet status" <<"\t" <<  status << endl;
                           cout << "yout date" <<"\t" <<  dat << endl;
                       }
                       else if(ch=='t')
                       {
                           cout <<"(#  Tests & Quizzes #)---" << endl;
                           cout << "(Assessments)---" << endl;
                           
                           cout << "Take an Assessment-------" << endl;
                           cout <<"There are currently no assessments available for you to take." << endl;
                           cout <<" Submitted Assessments------" << endl;
                           cout <<"You have not yet submitted any assessments." << endl;  
                       }
                       else if(ch=='g')
                       {
                           cout <<"(# GRANDE BOOK CLASSES #)" << endl;
                           cout <<"(Grade Report for Muhammad Jawad Khan p190053)" << endl;
                           cout << "(Course Grade)" << "\t" << "Not yet available" << endl;
                           cout << "(Legend:)" << endl;
                           cout << "*Grades in parentheses () are not included in the course grade calculation. " <<endl;
                        }
                        else if(ch=='d')
                        {
                                cout <<  " p190053, Muhammad Jawad Khan (p190053) p190053, Muhammad Jawad Khan (p190053) " << endl;

                                cout << "Files in your Drop Box can only be seen by you and the site maintainers. Other participants cannot access them." << endl;
                        }
                        else if(ch=='c')      
                        {
                            cout <<"(# chat room #)" << endl;
                            cout << "Currently viewing messages for 'Main Chat Room'View" << endl;
                            string um;
                            int rn;
                            string message;
                            cout <<"enter the user name" << endl;
                            cin >> um;
                            cout <<"enter the roll number" << endl;
                            cin >> rn;
                            cout <<"enter your message" << endl;
                            cin >> message;

                            cout <<"the user is" <<"\t" <<  um << endl;
                            cout <<"the ro_number is"<<"\t" << rn << endl;
                            cout << "the user message is" <<"\t" << message << endl;
                        }   
                        else if(ch=='w')
                        {
                            cout <<"--- (Welcome to the Wiki Tool) ---" << endl;
                            cout << "What is a wiki?" << endl;
                            cout << "A wiki is a tool which allows people to create web pages individually or as a group, without needing any web skills." << endl;
                            cout << "Using the wiki tool, you can create and edit web pages within your worksite. If you wish, you can make all or some pages publicly viewable. " << endl;

                            cout << "--- ( Using wikis for teaching ) ---" << endl;
                            cout << "There are a wide number of ways to use wikis for teaching - a web search will find any number of suggestions and case studies." << endl; 
                            cout <<" For example, students can develop a collection of resources about the topic they are studying, and make them available to the outside world."<< endl; 
                            cout << "Other lecturers like to produce a wiki page as a way of publishing lecture notes and course guidance for students to read but not edit. " << endl;

                            cout << "--- (Using wikis for research groups) ---" << endl;
                            cout << "A wiki allows people to work on producing a document together, such as to draft research proposals as a team, or to keep an up to date list of project contacts. " << endl;

                            cout << "--- (How do we get started?) ---" << endl;
                            cout << " This is the home page for your wiki. To add text to it: " << endl;
                        } 
                        else if(ch=='i')
                        {
                            cout << "(#  Section Info #)" << endl;
                           cout << " Section Memberships" << endl;
                          cout <<" You must contact your instructor to join or switch sections. " << endl;
                          cout <<"-- LECTURE SECTION ---" << endl;
                           cout << "Comp. Organization and Assembly Lang (LAB). BCS-3A	" << endl;	 
                           cout << "Comp. Organization and Assembly Lang (LAB). BCS-3B" << endl;
                        }  
                        else if (ch=='z')
                        {
                            cout <<"(# site info #)" << endl;
                            cout << "Comp. Organization and Assembly Lang. CS 2020-03 PWR " << endl;
                            cout << "(Site URL)" << "\t" <<  "	http://slate.nu.edu.pk/portal/site/PWREE213FALL2020CS " << endl;
                            cout << "Site contact and email )" << "\t" << "	SLATE Peshawar Administrator, slatepwr@nu.edu.pk" << endl;
                            cout << "(LaTeX)" << "\t" <<  "	Disabled " << endl;
                        }

                    cout << "if you want to check more course then simplt press y ***" << endl;
                       cout <<"press y to countinue" << endl;
                       cin >> z;
                    } 
               }
               else if(get=='g')
               {
                   cout << "--- (OVERVIEW) --- " << endl;
                   cout <<"--- (site info display) ---- " << endl;
                   cout << "Welcome to Course Linear Algebra ..., Offered by CS Department in Fall 2020 at Peshawar Campus " << endl;
                   
                      char z='y';
                   while (z=='y')
                   {
                       cout <<"press 's' for syllbus" << endl;
                       cout <<"pess 'a' for Announcements " << endl;
                       cout << "press 'r' for resources" << endl;
                       cout << "press 'f' for forums" << endl;
                       cout << " press 'b' for assigment" << endl;
                       cout << "press 't' for tests & quizzes" << endl;
                       cout << "press 'g' for grand book classic" << endl;
                       cout << "press 'd' for drop box" <<endl;
                       cout <<"press 'c' for chat room" << endl;
                       cout << "press 'w' for wiki" << endl;
                       cout <<"press 'i' for section info" << endl;
                       cout << "press 'z' for site info" << endl;
                       char ch;
                       cout <<"enter the option" << endl;
                       cin >> ch;
                       if(ch=='s')
                       {
                           cout <<"(# SYLLBUS #)--------"; 
                           cout <<"you have currently no syllbus for this course" << endl;
                       }
                       else if(ch=='a')
                       {
                           string abc;
                           string name;
                           int date;
                           cout <<"enter the announcment" << endl;
                           cin >> abc;
                           cout <<"enter the intructor name" << endl;
                           cin >> name;
                           cout <<"enter the laste submission date" << endl;
                           cin >> date;
                           cout << "the announcment is " << "\t" << abc << endl;
                           cout << "the inturctor name is" << "\t" << name << endl;
                           cout <<"the date is " << "\t" << date << endl;
                       }
                       else if(ch=='r')
                       {
                           cout <<"(# RESOURCES #) ---- " << endl;
                           cout <<"there are currently no resoures for this course" << endl;
                       }
                       else if(ch=='f')
                       {
                           cout <<"(# FORUMS #)--- " << endl;
                           cout << "LINEAR ALGEBRA . CS 2020-03 PWR Forum " << endl;
                           cout << "Topic FolderGeneral Discussion 0 unread of 0 messages " << endl;
                       }
                       else if(ch=='b')
                       {
                           cout <<"ASSIGNMENT--" << endl;
                           cout <<"(ASSIGNMENT LIST)" << endl;
                           string at,status;
                           int dat;
                           cout <<"enter the assignment title" << endl;
                           cin >> at;
                           cout <<"enter the your assignment status" << endl;
                           cin >> status;
                           cout <<"enter the date" << endl;
                           cin >> dat;

                           cout <<"the assignment title"  <<"\t" << at << endl;
                           cout << "your assignmet status" <<"\t" <<  status << endl;
                           cout << "yout date" <<"\t" <<  dat << endl;
                       }
                       else if(ch=='t')
                       {
                           cout <<"(#  Tests & Quizzes #)---" << endl;
                           cout << "(Assessments)---" << endl;
                           
                           cout << "Take an Assessment-------" << endl;
                           cout <<"There are currently no assessments available for you to take." << endl;
                           cout <<" Submitted Assessments------" << endl;
                           cout <<"You have not yet submitted any assessments." << endl;  
                       }
                       else if(ch=='g')
                       {
                           cout <<"(# GRANDE BOOK CLASSES #)" << endl;
                           cout <<"(Grade Report for Muhammad Jawad Khan p190053)" << endl;
                           cout << "(Course Grade)" << "\t" << "Not yet available" << endl;
                           cout << "(Legend:)" << endl;
                           cout << "*Grades in parentheses () are not included in the course grade calculation. " <<endl;
                        }
                        else if(ch=='d')
                        {
                                cout <<  " p190053, Muhammad Jawad Khan (p190053) p190053, Muhammad Jawad Khan (p190053) " << endl;

                                cout << "Files in your Drop Box can only be seen by you and the site maintainers. Other participants cannot access them." << endl;
                        }
                        else if(ch=='c')      
                        {
                            cout <<"(# chat room #)" << endl;
                            cout << "Currently viewing messages for 'Main Chat Room'View" << endl;
                            string um;
                            int rn;
                            string message;
                            cout <<"enter the user name" << endl;
                            cin >> um;
                            cout <<"enter the roll number" << endl;
                            cin >> rn;
                            cout <<"enter your message" << endl;
                            cin >> message;

                            cout <<"the user is" <<"\t" <<  um << endl;
                            cout <<"the ro_number is"<<"\t" << rn << endl;
                            cout << "the user message is" <<"\t" << message << endl;
                        }   
                        else if(ch=='w')
                        {
                            cout <<"--- (Welcome to the Wiki Tool) ---" << endl;
                            cout << "What is a wiki?" << endl;
                            cout << "A wiki is a tool which allows people to create web pages individually or as a group, without needing any web skills." << endl;
                            cout << "Using the wiki tool, you can create and edit web pages within your worksite. If you wish, you can make all or some pages publicly viewable. " << endl;

                            cout << "--- ( Using wikis for teaching ) ---" << endl;
                            cout << "There are a wide number of ways to use wikis for teaching - a web search will find any number of suggestions and case studies." << endl; 
                            cout <<" For example, students can develop a collection of resources about the topic they are studying, and make them available to the outside world."<< endl; 
                            cout << "Other lecturers like to produce a wiki page as a way of publishing lecture notes and course guidance for students to read but not edit. " << endl;

                            cout << "--- (Using wikis for research groups) ---" << endl;
                            cout << "A wiki allows people to work on producing a document together, such as to draft research proposals as a team, or to keep an up to date list of project contacts. " << endl;

                            cout << "--- (How do we get started?) ---" << endl;
                            cout << " This is the home page for your wiki. To add text to it: " << endl;
                        } 
                        else if(ch=='i')
                        {
                            cout << "(#  Section Info #)" << endl;
                           cout << " Section Memberships" << endl;
                          cout <<" You must contact your instructor to join or switch sections. " << endl;
                          cout <<"-- LECTURE SECTION ---" << endl;
                           cout << "LINEAR ALGEBRA. BCS-3A	" << endl;	 
                           cout << "LINEAR ALGEBRA. BCS-3B" << endl;
                        }  
                        else if (ch=='z')
                        {
                            cout <<"(# site info #)" << endl;
                            cout << "Comp. Organization and Assembly Lang. CS 2020-03 PWR " << endl;
                            cout << "(Site URL)" << "\t" <<  "	http://slate.nu.edu.pk/portal/site/PWREE213FALL2020CS " << endl;
                            cout << "Site contact and email )" << "\t" << "	SLATE Peshawar Administrator, slatepwr@nu.edu.pk" << endl;
                            cout << "(LaTeX)" << "\t" <<  "	Disabled " << endl;
                        }

                    cout << "if you want to check more course then simplt press y ***" << endl;
                       cout <<"press y to countinue" << endl;
                       cin >> z;
                    } 
               }
               else if(get=='f')
               {
                   cout << "(# OVERVIEW #) --- " << endl;
                   cout << "# ( site info display ) #" << endl;
                   cout << "Welcome to Course Fundamentals of Management, Offered by CS Department in Fall 2020 at Peshawar Campus " << endl;

                       char z='y';
                   while (z=='y')
                   {
                       cout <<"press 's' for syllbus" << endl;
                       cout <<"pess 'a' for Announcements " << endl;
                       cout << "press 'r' for resources" << endl;
                       cout << "press 'f' for forums" << endl;
                       cout << " press 'b' for assigment" << endl;
                       cout << "press 't' for tests & quizzes" << endl;
                       cout << "press 'g' for grand book classic" << endl;
                       cout << "press 'd' for drop box" <<endl;
                       cout <<"press 'c' for chat room" << endl;
                       cout << "press 'w' for wiki" << endl;
                       cout <<"press 'i' for section info" << endl;
                       cout << "press 'z' for site info" << endl;
                       char ch;
                       cout <<"enter the option" << endl;
                       cin >> ch;
                       if(ch=='s')
                       {
                           cout <<"(# SYLLBUS #)--------"; 
                           cout <<"you have currently no syllbus for this course" << endl;
                       }
                       else if(ch=='a')
                       {
                           string abc;
                           string name;
                           int date;
                           cout <<"enter the announcment" << endl;
                           cin >> abc;
                           cout <<"enter the intructor name" << endl;
                           cin >> name;
                           cout <<"enter the laste submission date" << endl;
                           cin >> date;
                           cout << "the announcment is " << "\t" << abc << endl;
                           cout << "the inturctor name is" << "\t" << name << endl;
                           cout <<"the date is " << "\t" << date << endl;
                       }
                       else if(ch=='r')
                       {
                           cout <<"(# RESOURCES #) ---- " << endl;
                           cout <<"there are currently no resoures for this course" << endl;
                       }
                       else if(ch=='f')
                       {
                           cout <<"(# FORUMS #)--- " << endl;
                           cout << "FUNDAMENTAL OF MANAGEMENT. CS 2020-03 PWR Forum " << endl;
                           cout << "Topic FolderGeneral Discussion 0 unread of 0 messages " << endl;
                       }
                       else if(ch=='b')
                       {
                           cout <<"ASSIGNMENT--" << endl;
                           cout <<"(ASSIGNMENT LIST)" << endl;
                           string at,status;
                           int dat;
                           cout <<"enter the assignment title" << endl;
                           cin >> at;
                           cout <<"enter the your assignment status" << endl;
                           cin >> status;
                           cout <<"enter the date" << endl;
                           cin >> dat;

                           cout <<"the assignment title"  <<"\t" << at << endl;
                           cout << "your assignmet status" <<"\t" <<  status << endl;
                           cout << "yout date" <<"\t" <<  dat << endl;
                       }
                       else if(ch=='t')
                       {
                           cout <<"(#  Tests & Quizzes #)---" << endl;
                           cout << "(Assessments)---" << endl;
                           
                           cout << "Take an Assessment-------" << endl;
                           cout <<"There are currently no assessments available for you to take." << endl;
                           cout <<" Submitted Assessments------" << endl;
                           cout <<"You have not yet submitted any assessments." << endl;  
                       }
                       else if(ch=='g')
                       {
                           cout <<"(# GRANDE BOOK CLASSES #)" << endl;
                           cout <<"(Grade Report for Muhammad Jawad Khan p190053)" << endl;
                           cout << "(Course Grade)" << "\t" << "Not yet available" << endl;
                           cout << "(Legend:)" << endl;
                           cout << "*Grades in parentheses () are not included in the course grade calculation. " <<endl;
                        }
                        else if(ch=='d')
                        {
                                cout <<  " p190053, Muhammad Jawad Khan (p190053) p190053, Muhammad Jawad Khan (p190053) " << endl;

                                cout << "Files in your Drop Box can only be seen by you and the site maintainers. Other participants cannot access them." << endl;
                        }
                        else if(ch=='c')      
                        {
                            cout <<"(# chat room #)" << endl;
                            cout << "Currently viewing messages for 'Main Chat Room'View" << endl;
                            string um;
                            int rn;
                            string message;
                            cout <<"enter the user name" << endl;
                            cin >> um;
                            cout <<"enter the roll number" << endl;
                            cin >> rn;
                            cout <<"enter your message" << endl;
                            cin >> message;

                            cout <<"the user is" <<"\t" <<  um << endl;
                            cout <<"the ro_number is"<<"\t" << rn << endl;
                            cout << "the user message is" <<"\t" << message << endl;
                        }   
                        else if(ch=='w')
                        {
                            cout <<"--- (Welcome to the Wiki Tool) ---" << endl;
                            cout << "What is a wiki?" << endl;
                            cout << "A wiki is a tool which allows people to create web pages individually or as a group, without needing any web skills." << endl;
                            cout << "Using the wiki tool, you can create and edit web pages within your worksite. If you wish, you can make all or some pages publicly viewable. " << endl;

                            cout << "--- ( Using wikis for teaching ) ---" << endl;
                            cout << "There are a wide number of ways to use wikis for teaching - a web search will find any number of suggestions and case studies." << endl; 
                            cout <<" For example, students can develop a collection of resources about the topic they are studying, and make them available to the outside world."<< endl; 
                            cout << "Other lecturers like to produce a wiki page as a way of publishing lecture notes and course guidance for students to read but not edit. " << endl;

                            cout << "--- (Using wikis for research groups) ---" << endl;
                            cout << "A wiki allows people to work on producing a document together, such as to draft research proposals as a team, or to keep an up to date list of project contacts. " << endl;

                            cout << "--- (How do we get started?) ---" << endl;
                            cout << " This is the home page for your wiki. To add text to it: " << endl;
                        } 
                        else if(ch=='i')
                        {
                            cout << "(#  Section Info #)" << endl;
                           cout << " Section Memberships" << endl;
                          cout <<" You must contact your instructor to join or switch sections. " << endl;
                          cout <<"-- LECTURE SECTION ---" << endl;
                           cout << "FUNDAMENTAL OF MANAGEMENT. BCS-3A	" << endl;	 
                           cout << "FUNDAMENTAL OF MANAGEMENT. BCS-3B" << endl;
                        }  
                        else if (ch=='z')
                        {
                            cout <<"(# site info #)" << endl;
                            cout << "Comp. Organization and Assembly Lang. CS 2020-03 PWR " << endl;
                            cout << "(Site URL)" << "\t" <<  "	http://slate.nu.edu.pk/portal/site/PWREE213FALL2020CS " << endl;
                            cout << "Site contact and email )" << "\t" << "	SLATE Peshawar Administrator, slatepwr@nu.edu.pk" << endl;
                            cout << "(LaTeX)" << "\t" <<  "	Disabled " << endl;
                        }

                    cout << "if you want to check more course then simplt press y ***" << endl;
                       cout <<"press y to countinue" << endl;
                       cin >> z;
                    } 
               }
               else if(get=='o')
               {
                   cout <<"(# overview #):" << endl;
                   cout <<"(site info display)" << endl;
                    cout << "Welcome to Course Object Oriented Programming, Offered by CS Department in Fall 2020 at Peshawar Campus  " << endl;

                       char z='y';
                   while (z=='y')
                   {
                       cout <<"press 's' for syllbus" << endl;
                       cout <<"pess 'a' for Announcements " << endl;
                       cout << "press 'r' for resources" << endl;
                       cout << "press 'f' for forums" << endl;
                       cout << " press 'b' for assigment" << endl;
                       cout << "press 't' for tests & quizzes" << endl;
                       cout << "press 'g' for grand book classic" << endl;
                       cout << "press 'd' for drop box" <<endl;
                       cout <<"press 'c' for chat room" << endl;
                       cout << "press 'w' for wiki" << endl;
                       cout <<"press 'i' for section info" << endl;
                       cout << "press 'z' for site info" << endl;
                       char ch;
                       cout <<"enter the option" << endl;
                       cin >> ch;
                       if(ch=='s')
                       {
                           cout <<"(# SYLLBUS #)--------"; 
                           cout <<"you have currently no syllbus for this course" << endl;
                       }
                       else if(ch=='a')
                       {
                           string abc;
                           string name;
                           int date;
                           cout <<"enter the announcment" << endl;
                           cin >> abc;
                           cout <<"enter the intructor name" << endl;
                           cin >> name;
                           cout <<"enter the laste submission date" << endl;
                           cin >> date;
                           cout << "the announcment is " << "\t" << abc << endl;
                           cout << "the inturctor name is" << "\t" << name << endl;
                           cout <<"the date is " << "\t" << date << endl;
                       }
                       else if(ch=='r')
                       {
                           cout <<"(# RESOURCES #) ---- " << endl;
                           cout <<"there are currently no resoures for this course" << endl;
                       }
                       else if(ch=='f')
                       {
                           cout <<"(# FORUMS #)--- " << endl;
                           cout << "OBJECT ORIENTED PROGRAMMING. CS 2020-03 PWR Forum " << endl;
                           cout << "Topic FolderGeneral Discussion 0 unread of 0 messages " << endl;
                       }
                       else if(ch=='b')
                       {
                           cout <<"ASSIGNMENT--" << endl;
                           cout <<"(ASSIGNMENT LIST)" << endl;
                           string at,status;
                           int dat;
                           cout <<"enter the assignment title" << endl;
                           cin >> at;
                           cout <<"enter the your assignment status" << endl;
                           cin >> status;
                           cout <<"enter the date" << endl;
                           cin >> dat;

                           cout <<"the assignment title"  <<"\t" << at << endl;
                           cout << "your assignmet status" <<"\t" <<  status << endl;
                           cout << "yout date" <<"\t" <<  dat << endl;
                       }
                       else if(ch=='t')
                       {
                           cout <<"(#  Tests & Quizzes #)---" << endl;
                           cout << "(Assessments)---" << endl;
                           
                           cout << "Take an Assessment-------" << endl;
                           cout <<"There are currently no assessments available for you to take." << endl;
                           cout <<" Submitted Assessments------" << endl;
                           cout <<"You have not yet submitted any assessments." << endl;  
                       }
                       else if(ch=='g')
                       {
                           cout <<"(# GRANDE BOOK CLASSES #)" << endl;
                           cout <<"(Grade Report for Muhammad Jawad Khan p190053)" << endl;
                           cout << "(Course Grade)" << "\t" << "Not yet available" << endl;
                           cout << "(Legend:)" << endl;
                           cout << "*Grades in parentheses () are not included in the course grade calculation. " <<endl;
                        }
                        else if(ch=='d')
                        {
                                cout <<  " p190053, Muhammad Jawad Khan (p190053) p190053, Muhammad Jawad Khan (p190053) " << endl;

                                cout << "Files in your Drop Box can only be seen by you and the site maintainers. Other participants cannot access them." << endl;
                        }
                        else if(ch=='c')      
                        {
                            cout <<"(# chat room #)" << endl;
                            cout << "Currently viewing messages for 'Main Chat Room'View" << endl;
                            string um;
                            int rn;
                            string message;
                            cout <<"enter the user name" << endl;
                            cin >> um;
                            cout <<"enter the roll number" << endl;
                            cin >> rn;
                            cout <<"enter your message" << endl;
                            cin >> message;

                            cout <<"the user is" <<"\t" <<  um << endl;
                            cout <<"the ro_number is"<<"\t" << rn << endl;
                            cout << "the user message is" <<"\t" << message << endl;
                        }   
                        else if(ch=='w')
                        {
                            cout <<"--- (Welcome to the Wiki Tool) ---" << endl;
                            cout << "What is a wiki?" << endl;
                            cout << "A wiki is a tool which allows people to create web pages individually or as a group, without needing any web skills." << endl;
                            cout << "Using the wiki tool, you can create and edit web pages within your worksite. If you wish, you can make all or some pages publicly viewable. " << endl;

                            cout << "--- ( Using wikis for teaching ) ---" << endl;
                            cout << "There are a wide number of ways to use wikis for teaching - a web search will find any number of suggestions and case studies." << endl; 
                            cout <<" For example, students can develop a collection of resources about the topic they are studying, and make them available to the outside world."<< endl; 
                            cout << "Other lecturers like to produce a wiki page as a way of publishing lecture notes and course guidance for students to read but not edit. " << endl;

                            cout << "--- (Using wikis for research groups) ---" << endl;
                            cout << "A wiki allows people to work on producing a document together, such as to draft research proposals as a team, or to keep an up to date list of project contacts. " << endl;

                            cout << "--- (How do we get started?) ---" << endl;
                            cout << " This is the home page for your wiki. To add text to it: " << endl;
                        } 
                        else if(ch=='i')
                        {
                            cout << "(#  Section Info #)" << endl;
                           cout << " Section Memberships" << endl;
                          cout <<" You must contact your instructor to join or switch sections. " << endl;
                          cout <<"-- LECTURE SECTION ---" << endl;
                           cout << "OBJECT ORIENTED PROGRAMMING. BCS-3A	" << endl;	 
                           cout << "OBJECT ORIENTED PROGRAMMING. BCS-3B" << endl;
                        }  
                        else if (ch=='z')
                        {
                            cout <<"(# site info #)" << endl;
                            cout << "Comp. Organization and Assembly Lang. CS 2020-03 PWR " << endl;
                            cout << "(Site URL)" << "\t" <<  "	http://slate.nu.edu.pk/portal/site/PWREE213FALL2020CS " << endl;
                            cout << "Site contact and email )" << "\t" << "	SLATE Peshawar Administrator, slatepwr@nu.edu.pk" << endl;
                            cout << "(LaTeX)" << "\t" <<  "	Disabled " << endl;
                        }

                    cout << "if you want to check more course then simplt press y ***" << endl;
                       cout <<"press y to countinue" << endl;
                       cin >> z;
                    } 
               }
               else if(get=='c')
               {
                   cout << "(# OVERVIEW #) ---- " << endl;
                   cout << "--- (site info display) --- " << endl;
                  cout << " Welcome to Course Object Oriented Programming (LAB) --- , Offered by CS Department in Fall 2020 at Peshawar Campus" << endl; 
                    char z='y';
                   while (z=='y')
                   {
                       cout <<"press 's' for syllbus" << endl;
                       cout <<"pess 'a' for Announcements " << endl;
                       cout << "press 'r' for resources" << endl;
                       cout << "press 'f' for forums" << endl;
                       cout << " press 'b' for assigment" << endl;
                       cout << "press 't' for tests & quizzes" << endl;
                       cout << "press 'g' for grand book classic" << endl;
                       cout << "press 'd' for drop box" <<endl;
                       cout <<"press 'c' for chat room" << endl;
                       cout << "press 'w' for wiki" << endl;
                       cout <<"press 'i' for section info" << endl;
                       cout << "press 'z' for site info" << endl;
                       char ch;
                       cout <<"enter the option" << endl;
                       cin >> ch;
                       if(ch=='s')
                       {
                           cout <<"(# SYLLBUS #)--------"; 
                           cout <<"you have currently no syllbus for this course" << endl;
                       }
                       else if(ch=='a')
                       {
                           string abc;
                           string name;
                           int date;
                           cout <<"enter the announcment" << endl;
                           cin >> abc;
                           cout <<"enter the intructor name" << endl;
                           cin >> name;
                           cout <<"enter the laste submission date" << endl;
                           cin >> date;
                           cout << "the announcment is " << "\t" << abc << endl;
                           cout << "the inturctor name is" << "\t" << name << endl;
                           cout <<"the date is " << "\t" << date << endl;
                       }
                       else if(ch=='r')
                       {
                           cout <<"(# RESOURCES #) ---- " << endl;
                           cout <<"there are currently no resoures for this course" << endl;
                       }
                       else if(ch=='f')
                       {
                           cout <<"(# FORUMS #)--- " << endl;
                           cout << "OBJECT ORIENTED PROGRAMMING (LAB). CS 2020-03 PWR Forum " << endl;
                           cout << "Topic FolderGeneral Discussion 0 unread of 0 messages " << endl;
                       }
                       else if(ch=='b')
                       {
                           cout <<"ASSIGNMENT--" << endl;
                           cout <<"(ASSIGNMENT LIST)" << endl;
                           string at,status;
                           int dat;
                           cout <<"enter the assignment title" << endl;
                           cin >> at;
                           cout <<"enter the your assignment status" << endl;
                           cin >> status;
                           cout <<"enter the date" << endl;
                           cin >> dat;

                           cout <<"the assignment title"  <<"\t" << at << endl;
                           cout << "your assignmet status" <<"\t" <<  status << endl;
                           cout << "yout date" <<"\t" <<  dat << endl;
                       }
                       else if(ch=='t')
                       {
                           cout <<"(#  Tests & Quizzes #)---" << endl;
                           cout << "(Assessments)---" << endl;
                           
                           cout << "Take an Assessment-------" << endl;
                           cout <<"There are currently no assessments available for you to take." << endl;
                           cout <<" Submitted Assessments------" << endl;
                           cout <<"You have not yet submitted any assessments." << endl;  
                       }
                       else if(ch=='g')
                       {
                           cout <<"(# GRANDE BOOK CLASSES #)" << endl;
                           cout <<"(Grade Report for Muhammad Jawad Khan p190053)" << endl;
                           cout << "(Course Grade)" << "\t" << "Not yet available" << endl;
                           cout << "(Legend:)" << endl;
                           cout << "*Grades in parentheses () are not included in the course grade calculation. " <<endl;
                        }
                        else if(ch=='d')
                        {
                                cout <<  " p190053, Muhammad Jawad Khan (p190053) p190053, Muhammad Jawad Khan (p190053) " << endl;

                                cout << "Files in your Drop Box can only be seen by you and the site maintainers. Other participants cannot access them." << endl;
                        }
                        else if(ch=='c')      
                        {
                            cout <<"(# chat room #)" << endl;
                            cout << "Currently viewing messages for 'Main Chat Room'View" << endl;
                            string um;
                            int rn;
                            string message;
                            cout <<"enter the user name" << endl;
                            cin >> um;
                            cout <<"enter the roll number" << endl;
                            cin >> rn;
                            cout <<"enter your message" << endl;
                            cin >> message;

                            cout <<"the user is" <<"\t" <<  um << endl;
                            cout <<"the ro_number is"<<"\t" << rn << endl;
                            cout << "the user message is" <<"\t" << message << endl;
                        }   
                        else if(ch=='w')
                        {
                            cout <<"--- (Welcome to the Wiki Tool) ---" << endl;
                            cout << "What is a wiki?" << endl;
                            cout << "A wiki is a tool which allows people to create web pages individually or as a group, without needing any web skills." << endl;
                            cout << "Using the wiki tool, you can create and edit web pages within your worksite. If you wish, you can make all or some pages publicly viewable. " << endl;

                            cout << "--- ( Using wikis for teaching ) ---" << endl;
                            cout << "There are a wide number of ways to use wikis for teaching - a web search will find any number of suggestions and case studies." << endl; 
                            cout <<" For example, students can develop a collection of resources about the topic they are studying, and make them available to the outside world."<< endl; 
                            cout << "Other lecturers like to produce a wiki page as a way of publishing lecture notes and course guidance for students to read but not edit. " << endl;

                            cout << "--- (Using wikis for research groups) ---" << endl;
                            cout << "A wiki allows people to work on producing a document together, such as to draft research proposals as a team, or to keep an up to date list of project contacts. " << endl;

                            cout << "--- (How do we get started?) ---" << endl;
                            cout << " This is the home page for your wiki. To add text to it: " << endl;
                        } 
                        else if(ch=='i')
                        {
                            cout << "(#  Section Info #)" << endl;
                           cout << " Section Memberships" << endl;
                          cout <<" You must contact your instructor to join or switch sections. " << endl;
                          cout <<"-- LECTURE SECTION ---" << endl;
                           cout << "OBJECT ORIENTED PROGRAMMING (LAB). BCS-3A	" << endl;	 
                           cout << "OBJECT ORIENTED PROGRAMMING (LAB). BCS-3B" << endl;
                        }  
                        else if (ch=='z')
                        {
                            cout <<"(# site info #)" << endl;
                            cout << "Comp. Organization and Assembly Lang. CS 2020-03 PWR " << endl;
                            cout << "(Site URL)" << "\t" <<  "	http://slate.nu.edu.pk/portal/site/PWREE213FALL2020CS " << endl;
                            cout << "Site contact and email )" << "\t" << "	SLATE Peshawar Administrator, slatepwr@nu.edu.pk" << endl;
                            cout << "(LaTeX)" << "\t" <<  "	Disabled " << endl;
                        }

                    cout << "if you want to check more course then simplt press y ***" << endl;
                       cout <<"press y to countinue" << endl;
                       cin >> z;
                    } 
               }
               else if(get=='d')
               {
                   cout <<"(# overview #):" << endl;
                   cout <<"(site info display)" << endl;
                    cout << "Welcome to Course DISCRETE STRUCTURE, Offered by CS Department in Fall 2020 at Peshawar Campus  " << endl;

                       char z='y';
                   while (z=='y')
                   {
                       cout <<"press 's' for syllbus" << endl;
                       cout <<"pess 'a' for Announcements " << endl;
                       cout << "press 'r' for resources" << endl;
                       cout << "press 'f' for forums" << endl;
                       cout << " press 'b' for assigment" << endl;
                       cout << "press 't' for tests & quizzes" << endl;
                       cout << "press 'g' for grand book classic" << endl;
                       cout << "press 'd' for drop box" <<endl;
                       cout <<"press 'c' for chat room" << endl;
                       cout << "press 'w' for wiki" << endl;
                       cout <<"press 'i' for section info" << endl;
                       cout << "press 'z' for site info" << endl;
                       char ch;
                       cout <<"enter the option" << endl;
                       cin >> ch;
                       if(ch=='s')
                       {
                           cout <<"(# SYLLBUS #)--------"; 
                           cout <<"you have currently no syllbus for this course" << endl;
                       }
                       else if(ch=='a')
                       {
                           string abc;
                           string name;
                           int date;
                           cout <<"enter the announcment" << endl;
                           cin >> abc;
                           cout <<"enter the intructor name" << endl;
                           cin >> name;
                           cout <<"enter the laste submission date" << endl;
                           cin >> date;
                           cout << "the announcment is " << "\t" << abc << endl;
                           cout << "the inturctor name is" << "\t" << name << endl;
                           cout <<"the date is " << "\t" << date << endl;
                       }
                       else if(ch=='r')
                       {
                           cout <<"(# RESOURCES #) ---- " << endl;
                           cout <<"there are currently no resoures for this course" << endl;
                       }
                       else if(ch=='f')
                       {
                           cout <<"(# FORUMS #)--- " << endl;
                           cout << "DISCRETE STRUCTURE. CS 2020-03 PWR Forum " << endl;
                           cout << "Topic FolderGeneral Discussion 0 unread of 0 messages " << endl;
                       }
                       else if(ch=='b')
                       {
                           cout <<"ASSIGNMENT--" << endl;
                           cout <<"(ASSIGNMENT LIST)" << endl;
                           string at,status;
                           int dat;
                           cout <<"enter the assignment title" << endl;
                           cin >> at;
                           cout <<"enter the your assignment status" << endl;
                           cin >> status;
                           cout <<"enter the date" << endl;
                           cin >> dat;

                           cout <<"the assignment title"  <<"\t" << at << endl;
                           cout << "your assignmet status" <<"\t" <<  status << endl;
                           cout << "yout date" <<"\t" <<  dat << endl;
                       }
                       else if(ch=='t')
                       {
                           cout <<"(#  Tests & Quizzes #)---" << endl;
                           cout << "(Assessments)---" << endl;
                           
                           cout << "Take an Assessment-------" << endl;
                           cout <<"There are currently no assessments available for you to take." << endl;
                           cout <<" Submitted Assessments------" << endl;
                           cout <<"You have not yet submitted any assessments." << endl;  
                       }
                       else if(ch=='g')
                       {
                           cout <<"(# GRANDE BOOK CLASSES #)" << endl;
                           cout <<"(Grade Report for Muhammad Jawad Khan p190053)" << endl;
                           cout << "(Course Grade)" << "\t" << "Not yet available" << endl;
                           cout << "(Legend:)" << endl;
                           cout << "*Grades in parentheses () are not included in the course grade calculation. " <<endl;
                        }
                        else if(ch=='d')
                        {
                                cout <<  " p190053, Muhammad Jawad Khan (p190053) p190053, Muhammad Jawad Khan (p190053) " << endl;

                                cout << "Files in your Drop Box can only be seen by you and the site maintainers. Other participants cannot access them." << endl;
                        }
                        else if(ch=='c')      
                        {
                            cout <<"(# chat room #)" << endl;
                            cout << "Currently viewing messages for 'Main Chat Room'View" << endl;
                            string um;
                            int rn;
                            string message;
                            cout <<"enter the user name" << endl;
                            cin >> um;
                            cout <<"enter the roll number" << endl;
                            cin >> rn;
                            cout <<"enter your message" << endl;
                            cin >> message;

                            cout <<"the user is" <<"\t" <<  um << endl;
                            cout <<"the ro_number is"<<"\t" << rn << endl;
                            cout << "the user message is" <<"\t" << message << endl;
                        }   
                        else if(ch=='w')
                        {
                            cout <<"--- (Welcome to the Wiki Tool) ---" << endl;
                            cout << "What is a wiki?" << endl;
                            cout << "A wiki is a tool which allows people to create web pages individually or as a group, without needing any web skills." << endl;
                            cout << "Using the wiki tool, you can create and edit web pages within your worksite. If you wish, you can make all or some pages publicly viewable. " << endl;

                            cout << "--- ( Using wikis for teaching ) ---" << endl;
                            cout << "There are a wide number of ways to use wikis for teaching - a web search will find any number of suggestions and case studies." << endl; 
                            cout <<" For example, students can develop a collection of resources about the topic they are studying, and make them available to the outside world."<< endl; 
                            cout << "Other lecturers like to produce a wiki page as a way of publishing lecture notes and course guidance for students to read but not edit. " << endl;

                            cout << "--- (Using wikis for research groups) ---" << endl;
                            cout << "A wiki allows people to work on producing a document together, such as to draft research proposals as a team, or to keep an up to date list of project contacts. " << endl;

                            cout << "--- (How do we get started?) ---" << endl;
                            cout << " This is the home page for your wiki. To add text to it: " << endl;
                        } 
                        else if(ch=='i')
                        {
                            cout << "(#  Section Info #)" << endl;
                           cout << " Section Memberships" << endl;
                          cout <<" You must contact your instructor to join or switch sections. " << endl;
                          cout <<"-- LECTURE SECTION ---" << endl;
                           cout << "DISCRETE STRUCTURE. BCS-3A	" << endl;	 
                           cout << "DISCRETE STRUCTURE. BCS-3B" << endl;
                        }  
                        else if (ch=='z')
                        {
                            cout <<"(# site info #)" << endl;
                            cout << "Comp. Organization and Assembly Lang. CS 2020-03 PWR " << endl;
                            cout << "(Site URL)" << "\t" <<  "	http://slate.nu.edu.pk/portal/site/PWREE213FALL2020CS " << endl;
                            cout << "Site contact and email )" << "\t" << "	SLATE Peshawar Administrator, slatepwr@nu.edu.pk" << endl;
                            cout << "(LaTeX)" << "\t" <<  "	Disabled " << endl;
                        }

                    cout << "if you want to check more course then simplt press y ***" << endl;
                       cout <<"press y to countinue" << endl;
                       cin >> z;
                    } 
               }
               cout << "do you want to exist in courses" << endl;
               cin >> a;
           } while (a!='y');
        }
        else if(roll_no!=190053 && password!=12345)
        {
            cout << "(Soory) this user does't exist" << endl;
        }
    }
    void manage_data()
    {
        cout <<"press 's'for check your site" << endl;
        cout <<"press 'p' for (PROFILE) " << endl;
        cout <<"press 'm' for (MEMBERSHIP)" << endl;
        cout <<"press 'w' for (WORKSITE SETUP)" << endl;
        cout <<"press 'z' for (PREFERENCE)" << endl;
        cout <<"press 'a' for (ACCOUNT)" << endl;
        cout <<"press 't' for (TRUSTED APPLICATION)"  << endl;
        char n;
        do
        {
            char option;
            cout <<"enter the option " << endl;
            cin >> option;
            if(option=='s')
            {
                cout << "Star sites below to add them to your favorites bar. New sites will be automatically added to your favorites." << endl;
                cout <<"-------------------------------------------------------------------------" << endl;
                cout <<" () Unknown academic Terms" << endl;
                cout << "() COMPUTER ORGANIZATION AND ASSEMBLY LANGUAGE" << endl;
                cout <<" () COMPUTER ORGANIZATION AND ASSEMBLY LANGUAGE (LAB)" << endl;
                cout << "() DISCRETE STRUCTURE" << endl;
                cout << "() FUNDAMENTAL OF MANAGMENT" << endl;
                cout << "() OBJECT ORIENTED PROGRAMMING" << endl;
                cout << "() OBJECT ORIENTED PROGRAMMING (LAB)" << endl;
                cout <<"------------------------------------------------------------------------------" << endl;
            }
            else if(option=='p')
            {
                cout << "---------------------------------------------------------------------" << endl;
                cout <<"MUHAMMAD JAWAD KHAN (190053)" << endl;
                cout <<"---------(PROFILE)-------" << endl;
                cout <<"------------ (BASIC INFORMATION) -----------" << endl;
                cout <<"(NICKNAME OF THAT PERSON)" << "\t" << "::jk::" << endl;
                cout <<"(DATE_OF_BIRTH)" << "\t" << "14/8/2001" << endl;

                cout <<"-------(contact information) -----------" << endl;
                cout <<"EMAIL" << "\t" << "(p190053@nu.edu.pk)" << endl;

                cout <<"-----------(STAFF INFORMATION)--------------" << endl;
                cout <<"(DEPARTMENT)" << "\t" << "(COMPUTER SCIENCE)" << endl;
                cout <<"(SCHOOL)" << "\t" << "(GOVT MENT HIGHT SCHOOL PIND DADAN KHAN)"  << endl;

                cout <<"------------(DEGREE INFORMATION)---------------"  << endl;
                cout <<"(DEGREE/COURSE)" << "\t" << "(COMPUTER SCIENCE) " << endl;
                cout <<"(COURSE)" << "\t" << "OOP/COAL/DISCRETE/MANAGMENT/" << endl;

                cout <<"--------------(SOCAIL NETWORKING) ----------------------" << endl;
                cout <<"(FACEBOOK URL)"  <<"\t" << "https://web.facebook.com/khan.jawadkhan.509/" << endl;

                cout <<"------------------(PERSONAL INFORMATION)------------------" << endl;
                cout <<"(FAV BOOKS)" << "\t" << "In Search of Lost Time by Marcel Proust. ... " << endl;
                cout << "(Favorite quotes)" << "\t" << "DON'T BURN YOUR APPORTUNITY FOR TEMPERORIY COMFORTS" << endl;

                cout << "----------------------------------------------------------------" << endl;

            }
            else if(option=='m')
            {
                cout <<"------------------------------------------------" << endl;
                cout <<"(My Current Sites)" << endl;
                cout <<"Worksite " << "                                                      " << "DESCRIPTION" << endl;
                cout << "Comp. Organization and Assembly Lang. CS 2020-03 PWR"   << "\t" << "\t"  <<  " No short site description has been provided Welcome to Course Comp. Organization and Assembly Lang., Offered by CS Department in Fall 2020 at Peshawar Campus" << endl;
                cout <<"Comp. Organization and Assembly Lang. Lab CS 2020-03 PWR" << "\t" <<"\t" << "No short site description has been provided Welcome to Course Comp. Organization and Assembly Lang. Lab, Offered by CS Department in Fall 2020 at Peshawar Campus" << endl;
                cout <<"Discrete Structures CS 2020-03 PWR"                        << "\t" <<"\t" << "No short site description has been provided Welcome to Course Discrete Structures, Offered by CS Department in Fall 2020 at Peshawar Campus" << endl;
                cout <<"Fundamentals of Management CS 2020-03 PWR"                   << "\t" <<"\t" << "No short site description has been provided Welcome to Course Fundamentals of Management, Offered by CS Department in Fall 2020 at Peshawar Campus" << endl;
                cout <<"Linear Algebra CS 2020-03 PWR"                                 << "\t" << "\t" << "No short site description has been provided Welcome to Course Linear Algebra, Offered by CS Department in Fall 2020 at Peshawar Campus" <<endl;
                cout <<"Object Oriented Programming - Lab CS 2020-03 PWR"                << "\t" << "\t" << "No short site description has been provided Welcome to Course Object Oriented Programming - Lab, Offered by CS Department in Fall 2020 at Peshawar Campus" << endl;
                cout <<"Object Oriented Programming CS 2020-03 PWR"                        << "\t" << "\t"  << "No short site description has been provided Welcome to Course Object Oriented Programming, Offered by CS Department in Fall 2020 at Peshawar Campus" << endl;

                cout <<"-------------------------------------------------------------------------------------" << endl;

            }
            else if(option=='w')
            {
                cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;

                cout <<"(WORKSITE TITLE)" <<  "\t" << "(CREATOR)" << "\t" <<  "p190053" << endl;
                cout << "\t" << " 	Comp. Organization and Assembly Lang. CS 2020-03 PWR "<<  "\t"  << "(TYPE)" << "\t" << "COURSE" << endl;
                cout << "\t" << "Comp. Organization and Assembly Lang. Lab CS 2020-03 PWR "<< "\t"  << "(TYPE)" << "\t" << "COURSE" << endl;
                cout << "\t" << "Discrete Structures CS 2020-03 PWR                      " <<  "\t" << "(TYPE)"  << "\t" << "COURSE" << endl;
                cout << "\t" << "Fundamentals of Management CS 2020-03 PWR " <<  "\t"               << "(TYPE)" << "\t" << "COURSE" << endl;
                cout << "\t" << " 	Linear Algebra CS 2020-03 PWR " <<  "\t"                        <<"(TYPE)" <<"\t" << "COURSE" << endl;
                cout << "\t" << "Object Oriented Programming - Lab CS 2020-03 PWR " <<  "\t"        << "(TYPE)" <<"\t" <<  "COURSE" << endl;
                cout << "\t" << "Object Oriented Programming CS 2020-03 PWR" <<  "\t"               << "(TYPE)" <<"\t" << "COURSE" << endl;

                cout <<"---------------------------------------------------------------------------------------------------------------------------------" << endl;

            }
            else if(option=='z')
            {
                cout <<"##(NOTIFICATION)##" << endl;
                cout << "--------------------------------------------------------------------------------------------------" << endl;
                cout << "You will receive all high priority notifications via email. Set low priority notifications below. " << endl;
                cout << "---------------------------------------------------------------------------------------------------" << endl;

                cout <<"-------------------------------------------------------------------------------------------------------------" << endl;

                cout << "##(Announcements)##" << endl;
                cout <<"0" << "\t" << "Do not send me low priority announcements" << endl;
                cout <<"0" << "\t" << " Send me one email per day summarizing all low priority announcements" << endl;
                cout <<"0" << "\t" << "Send me each notification separately" << endl;

                cout <<"##(Resources and Drop Box)##" << endl;
                cout <<"0" << "\t" << "Do not send me low priority announcements" << endl;
                cout <<"0" << "\t" << " Send me one email per day summarizing all low priority announcements" << endl;
                cout <<"0" << "\t" << "Send me each notification separately" << endl;

                cout << "##(Email Archive)##" << endl;
                cout <<"0" << "\t" << "Do not send me low priority announcements" << endl;
                cout <<"0" << "\t" << " Send me one email per day summarizing all low priority announcements" << endl;
                cout <<"0" << "\t" << "Send me each notification separately" << endl;

                cout <<"##(Syllabus)##" << endl;
                cout <<"0" << "\t" << "Do not send me low priority announcements" << endl;
                cout <<"0" << "\t" << " Send me one email per day summarizing all low priority announcements" << endl;
                cout <<"0" << "\t" << "Send me each notification separately" << endl;

                cout <<"##(Tests & Quizzes)##" << endl;
                cout <<"0" << "\t" << "Do not send me low priority announcements" << endl;
                cout <<"0" << "\t" << " Send me one email per day summarizing all low priority announcements" << endl;
                cout <<"0" << "\t" << "Send me each notification separately" << endl;
                cout << "-------------------------------------------------------------------------------------------------" << endl;
            }
            else if(option=='a')
            {
                cout << "-------------------------------------------------" << endl;
                cout <<"------ YOUR ACCOUNT DETAILS" << endl;
                cout << "USER ID" << "(p190053)" << endl;
                cout << "FIRST NAME" << "(jawad )" << endl;
                cout <<"LAST NAME"  << "(khan)" << endl;
                cout <<"TYPE" << "(STUDENT)"  << endl;
                cout <<"EMAIL" << "(p190053@nu.edu.pk)" << endl;
                cout << "--------------------------------------------------------" << endl;
            }  
            else if(option=='t')
            {
                cout << "--------------------------------------------------" << endl;
                cout <<"-------(List of Applications)-------" << endl;
                cout << "You currently don't have any applications able to access your account." << endl;
                cout << "----------------------------------------------------" << endl;
            }
                cout <<"Do you want to countinue(y/n)" << endl;
                cin >> c;
        } while (c!='n');
    }
};
int main()
{
    frontpage *obj;
    obj->show_some_data();
    obj->check_features();
    student_data *obj1;
    obj1->set_data();
    obj1->get_data();
    obj1->manage_data();
    system ("pause");
    delete[] obj,obj1;
    return 0;
}


