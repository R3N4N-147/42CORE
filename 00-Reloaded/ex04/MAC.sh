ifconfig | grep 'ether' | cut -b -32

// ifconfig [-v] [-a] [-s] [interface]
// ifconfig [-v] interface [aftype] options | address ...

// grep is a command-line tool for searching text patterns within files.
// ether: The link/ether field associated with your ethernet interface is your MAC address
// command cut (check cut --help)

// https://sequence-gazing.co.uk/grep-cut-and-piping-on-the-command-line/