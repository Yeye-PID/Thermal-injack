#!/system/bin/sh
     
       # cekhing ID shell 
    if [ "$(id -u)" -ne 2000 ]; then
       echo "[Eror | @Yeye_nat(Yeye) ]"
      exit 1
         fi
    # check arry derktory
  if [ -d /sdcard/Shell-Yeye ]; then
    echo "derktory Not found !"
   fi > /dev/null 2>&1
   # smart Notification
      shell() {
      semart="$1"
    cmd notification post -S bigtext -t '🍃 Optimizer Resource' 'Tag' "$semart" > /dev/null 2>&1
  }
   
   # styal display Terminal
  shell "Loading Program...."
  echo 
  echo
  echo "     ☆================================☆"
  echo
  echo "       ~ Discription thermal injack....."
  echo
  echo "       - Author              :  @Yeye_nat"
  echo "       - Version            :  1.0"
  echo "       - Release            :  05 - Jan -2025"
  echo "       - Name Shell     :  thermal injack"
  echo     
  echo "    |_______________________________________|"
  echo "    \______________________________________/"
 sleep 1    
   cp /sdcard/Shell-Yeye/thermal /data/local/tmp/thermal && chmod +x /data/local/tmp/thermal && /data/local/tmp/thermal