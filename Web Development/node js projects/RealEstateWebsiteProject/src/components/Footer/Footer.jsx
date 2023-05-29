import React from 'react'
import "./Footer.css"
const Footer = () => {
  return (
    <section className='f-wrapper'>
        <div className='paddings innerWidth flexCenter f-container '>
        {/* right section */}
            <div className=' flexColStart f-left'>
                <img src='./logo2.png'/>
                <span className='secondaryGreenText'>Our vision is to provide all people the best place to live for them </span>
            </div>
        {/* left section */}
            <div className=' flexColEnd f-right'>
                <span className=' primaryText'>Information</span>
                <span className=' secondaryGreenText'>10 Civil Lines, Mathura UP, India</span>
                <div className='flexStart links'>
                    <span><a href='https://www.google.com'>Property</a></span>
                    <span><a href='https://www.google.com'>Services</a></span>
                    <span><a href='https://www.google.com'>Products</a></span>
                    <span><a href='https://www.google.com'>About Us</a></span>
                </div>
            </div>
        </div>
    </section>
  )
}

export default Footer;