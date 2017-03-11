# damage at 15 lvl
d_punch = 72 
d_bull_rush = 210 
d_shield_slam = 430 

# scaling
s_punch = 0.6
s_bull_rush = 0.8
s_shield_slam = 0.9

#points
card_point = 6 
    
cards = int(input("Enter cards: "))    
cards *= card_point

#add scaling * cards
s_punch *= cards
s_bull_rush *= cards
s_shield_slam *= cards

# add damage + scaling
d_punch += s_punch
d_bull_rush += s_bull_rush
d_shield_slam += s_shield_slam

print("[LMB] Punch:", d_punch)
print("[Q] Bull rush:", d_bull_rush)
print("[R] Shield slam:", d_shield_slam)
