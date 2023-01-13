void debug() {
  if (serialDebug == true) {
    Serial.println( "====== ERROR MESSAGE  ======\n" + ERROR_MESSAGE + "\n" + ERROR_MESSAGE_2 + "\n" + ERROR_MESSAGE_3 + "\n");

    Serial.print("weather icon error: ");
    Serial.println(weatherIconError); // if return 1 = error, else if 0 = no error

    Serial.print("weather text error: ");
    Serial.println(weatherTextError);// if return 1 = error, else if 0 = no error

    Serial.print("weather value error: ");
    Serial.println(weatherValueError);// if return 1 = error, else if 0 = no error

    Serial.print("last update error: ");
    Serial.println(lastUpdateError);// if return 1 = error, else if 0 = no error

    Serial.print("icon z1 error: ");
    Serial.println(iconZ1Error);// if return 1 = error, else if 0 = no error

    Serial.print("icon z2 error: ");
    Serial.println(iconZ2Error);// if return 1 = error, else if 0 = no error

    Serial.print("icon z3 error: ");
    Serial.println(iconZ3Error);// if return 1 = error, else if 0 = no error

    Serial.print("icon z4 error: ");
    Serial.println(iconZ4Error);// if return 1 = error, else if 0 = no error

    Serial.print("icon z5 error: ");
    Serial.println(iconZ5Error);// if return 1 = error, else if 0 = no error

    Serial.print("icon z6 error: ");
    Serial.println(iconZ6Error);// if return 1 = error, else if 0 = no error

    Serial.print("name z1 error: ");
    Serial.println(nameZ1Error);// if return 1 = error, else if 0 = no error

    Serial.print("name z2 error: ");
    Serial.println(nameZ2Error);// if return 1 = error, else if 0 = no error

    Serial.print("name z3 error: ");
    Serial.println(nameZ3Error);// if return 1 = error, else if 0 = no error

    Serial.print("name z4 error: ");
    Serial.println(nameZ4Error);// if return 1 = error, else if 0 = no error

    Serial.print("name z5 error: ");
    Serial.println(nameZ5Error);// if return 1 = error, else if 0 = no error

    Serial.print("name z6 error: ");
    Serial.println(nameZ6Error);// if return 1 = error, else if 0 = no error

    Serial.print("value z1 error: ");
    Serial.println(valueZ1Error);// if return 1 = error, else if 0 = no error

    Serial.print("value z2 error: ");
    Serial.println(valueZ2Error);// if return 1 = error, else if 0 = no error

    Serial.print("value z3 error: ");
    Serial.println(valueZ3Error);// if return 1 = error, else if 0 = no error

    Serial.print("value z4 error: ");
    Serial.println(valueZ4Error);// if return 1 = error, else if 0 = no error

    Serial.print("value z5 error: ");
    Serial.println(valueZ5Error);// if return 1 = error, else if 0 = no error

    Serial.print("value z6 error: ");
    Serial.println(valueZ6Error);// if return 1 = error, else if 0 = no error

    serialDebug = false;
  }
}
