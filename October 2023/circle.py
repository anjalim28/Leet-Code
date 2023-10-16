def circles(info):
   result = []
   for i in info:
       # Parse the descriptors for circle A and circle B
       xA, yA, rA, xB, yB, rB = map(int, i.split())
       
       # Calculate the distance between the centers of the circles
       distance = ((xA - xB) ** 2 + (yA - yB) ** 2) ** 0.5
       # Check the relationship between the circles based on their positions and sizes
       if distance == rA + rB:
           result.append("Touching")
       elif distance == 0 and rA == rB:
           result.append("Concentric")
       elif distance < rA + rB:
           result.append("Intersecting")
       elif distance > rA + rB:
           if distance > max(rA, rB):
               result.append("Disjoint-Outside")
           else:
               result.append("Disjoint-Inside")
   return result