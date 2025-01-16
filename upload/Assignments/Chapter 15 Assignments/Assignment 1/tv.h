#pragma once
class TV;
class Remote {
public:
	friend TV;
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { tv, DVD };
	enum { Regular, Interactive };
private:
	int mode;
	int status;
public:
	Remote(int m = tv) :mode(m),status(Regular){}
	void onoff(TV& t) const;
	bool ison(TV& t) const;
	bool volup(TV& t)const;
	bool voldown(TV& t)const;
	void chanup(TV& t)const;
	void chandown(TV& t)const;
	void set_mode(TV& t) const;
	void set_input(TV& t) const;
	void set_channel(TV& t, int c);
	void set_status();
	
};
class TV {
public:
	friend Remote;
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };

private:
	friend void Remote::set_channel(TV& t, int c);
	enum { tv, DVD };
	int state;
	int volume;
	int mode;
	int maxchannel;
	int channel;
	int input;
public:
	TV(int s = Off, int mc = 125) :state(s), volume(5), mode(Cable), maxchannel(mc), channel(2), input(tv) {}
	void onoff() { state = (state == Off) ? On : Off; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Cable) ? Antenna : Cable; }
	void set_input() { input = (input == tv) ? DVD : tv; }
	void settings() const;
	void set_RemoteStatus(Remote& r) const;
};

inline void Remote::set_channel(TV& t, int c) { t.channel = c; }
inline void Remote::onoff(TV& t) const { t.onoff(); }
inline bool Remote::ison(TV& t) const { return t.ison(); }
inline bool Remote::volup(TV& t)const { return t.volup(); }
inline bool Remote::voldown(TV& t)const { t.voldown(); }
inline void Remote::chanup(TV& t)const { t.chanup(); }
inline void Remote::chandown(TV& t)const { t.chandown(); }
inline void Remote::set_mode(TV& t) const { t.set_mode(); }
inline void Remote::set_input(TV& t) const { t.set_input(); }
inline void Remote::set_status() { status = ((status == Regular) ? Interactive : Regular); }
