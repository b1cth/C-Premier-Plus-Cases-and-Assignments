#pragma once
class TV {
public:
	enum{Off, On};
	enum{MinVal,MaxVal=20};
	enum{Antenna,Cable};
	
private:
	friend class Remote;
	enum { tv, DVD };
	int state;
	int volume;
	int mode;
	int maxchannel;
	int channel;
	int input;
public:
	TV(int s=Off,int mc=125):state(s),volume(5),mode(Cable),maxchannel(mc),channel(2),input(tv){}
	void onoff() { state = (state == Off) ? On : Off; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Cable) ? Antenna : Cable; }
	void set_input() { input = (input == tv) ? DVD : tv; }
	void settings() const;
};

class Remote {
private:
	int mode;
public:
	Remote(int m=TV::tv):mode(m){}
	void onoff(TV& t) const { t.onoff(); }
	bool ison(TV& t) const { return t.ison(); }
	bool volup(TV& t)const { return t.volup(); }
	bool voldown(TV& t)const { t.voldown(); }
	void chanup(TV& t)const { t.chanup(); }
	void chandown(TV& t)const { t.chandown(); }
	void set_mode(TV& t) const { t.set_mode(); }
	void set_input(TV& t) const { t.set_input(); }
	void set_channel(TV& t, int c) { t.channel = c; }

};