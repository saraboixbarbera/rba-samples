//
// This file is part of an OMNeT++/OMNEST simulation example.
//
// Copyright (C) 1992-2015 Andras Varga
//
// This file is distributed WITHOUT ANY WARRANTY. See the file
// `license' for details on this and other legal matters.
//


//
// The Aloha network consists of hosts which talk to the central "server" via
// the Aloha or Slotted Aloha protocol
//
network Aloha
{
    parameters:
        int numHosts;  // numero de host en la red
        double txRate @unit(bps);  // bps es la velocidad de transmision 
        double slotTime @unit(ms);  //define si usamos ranuras de tiempo o si estas sin =0
        @display("bgi=background/terrain,s;bgb=1000,1000");
    submodules:
        server: Server;
        host[numHosts]: Host {
            txRate = parent.txRate;
            slotTime = parent.slotTime;
        }
}

