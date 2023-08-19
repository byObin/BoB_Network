# Netfilter 

sudo iptables -F <br>
sudo iptables -A OUTPUT -j NFQUEUE --queue-num 0 <br>
sudo iptables -A INPUT -j NFQUEUE --queue-num 0 <br>

make
