cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
project(C__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Übung1)
include_directories(Übung2)
include_directories(Übung3)
include_directories(Übung4)
include_directories(Übung4/Drehmel_Fabian_uebung4)
include_directories(Übung5/Drehmel_Fabian_Uebung5)

add_executable(C__
#Übung 1
#        Übung1/Aufgabe_1.2-BIT-Shift.cpp
#        Übung1/Aufgabe_1.3-PQ-Formel.cpp
#        Übung1/Aufgabe_1.4-GroessteZahl.cpp
#        Übung1/Aufgabe_1.5-IntZUBinaer.cpp
#        Übung1/Aufgabe_1.8-SummeAllerSchleifen.cpp

#Übung 2
#        Übung2/Aufgabe_2.1-StringZULong.cpp
#        Übung2/Aufgabe_2.2-Zahlenachterbahn.cpp
#        Übung2/Aufgabe_2.3-DateiEinlesenZUHex.cpp

#Übung 3
#        Übung3/Aufage_3.1-eHOCHx.cpp
#        Übung3/Aufgabe_3.2-getTypeSpezi.cpp
#        Übung3/Aufgabe3.3-Taschenrechner.cpp

#Übung4
#        Übung4/Aufgabe_4.1BruchMITLongAddieren.cpp Übung4/rational.h Übung4/rational.cpp
#        Übung4/Aufgabe_4.2-IntMenge.cpp Übung4/IntMenge.h Übung4/IntMenge.cpp
#        Übung4/Aufgabe_4.4-StringTaschenrechner.cpp Übung4/Taschenrechner.h Übung4/Taschenrechner.cpp

#Übung5
#        Übung5/Aufgabe_5.1-GroesseMatrix.cpp
#        Übung5/Aufgabe_5.2-TemplateArray.cpp Übung5/array2d.h
#        Übung5/Aufgabe_5.3-TemplateListe.cpp
#        Übung5/Aufgabe_5.4StringSpacesEntfernen.cpp
#        Übung5/Aufgabe_5.5-DateinEinlesenUndAusgeben.cpp
#        Übung5/Aufgabe_5.6-DateiEinlesenUndAuswerten.cpp //FIXME FÜR DATEI
#        Übung5/Aufgabe_5.7-TeilnehmerTyp.cpp Übung5/Teilnehmer.h Übung5/Teilnehmer.cpp

#Übung7
#        Übung7/Aufgabe7.0-InStringEinfuegen/Meinstring.cpp Übung7/Aufgabe7.0-InStringEinfuegen/Meinstring.h Übung7/Aufgabe7.0-InStringEinfuegen/MeinstringMain.cpp
#        Übung7/Aufgabe7_1-2-Vererbung/Person.cpp Übung7/Aufgabe7_1-2-Vererbung/Person.h Übung7/Aufgabe7_1-2-Vererbung/Professor.cpp Übung7/Aufgabe7_1-2-Vererbung/Professor.h Übung7/Aufgabe7_1-2-Vererbung/Programm.cpp Übung7/Aufgabe7_1-2-Vererbung/Student.cpp Übung7/Aufgabe7_1-2-Vererbung/Student.h

#Übung 8
#        Übung8/8.1-3-OperatorUeberladungRational/main.cpp Übung8/8.1-3-OperatorUeberladungRational/rational.cpp Übung8/8.1-3-OperatorUeberladungRational/rational.h
#        Übung8/8.4-5-OperatorÜberladungString/main.cpp Übung8/8.4-5-OperatorÜberladungString/Meinstring.h Übung8/8.4-5-OperatorÜberladungString/Meinstring.cpp
#        Übung8/8.6-9-OperatorÜberladungDatumUNDException/Datum.cpp Übung8/8.6-9-OperatorÜberladungDatumUNDException/Datum.h Übung8/8.6-9-OperatorÜberladungDatumUNDException/UngueltigesDatumException.h  //FIXME KAPUTT

#Übung 9
#        Übung9-InMAPsavenUndIterator/NamensMap.cpp

#Übung 10
#        Übung10-QueueInitialiserListSTD/main.cpp Übung10-QueueInitialiserListSTD/MyQueue.cpp Übung10-QueueInitialiserListSTD/MyQueue.h

#Übung 11
#        Übung11/11.1-ThreadsNutzen/main.cpp
#        Übung11/11.2-ThreadsSchlafen/main.cpp
#        Übung11/11.3-ThreadsAbhaengigkeit/main.cpp
#        Übung11/11.4-Lambda/main.cpp
#        Übung11/11.5-LambdaFunction/main.cpp
#        Übung11/11.6-LambdaFunktion2/main.cpp
        )
